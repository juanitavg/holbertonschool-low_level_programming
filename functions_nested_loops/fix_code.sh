#!/bin/bash

# Comando para eliminar los espacios al inicio de las líneas
sed -i 's/^[[:space:]]*//' "$1"

# Comando para colocar las llaves en la misma línea
sed -i 's/{\n/ {/' "$1"  # Asegura que las llaves estén en la misma línea

# Comando para reemplazar los espacios por tabs en la indentación
sed -i 's/^[ ]*\([^\t]*\)/\t\1/' "$1"

# Comando para eliminar llaves innecesarias para bloques de una sola línea
sed -i '/^[[:space:]]*if[[:space:]]*(.*)[[:space:]]*\n[[:space:]]*{[[:space:]]*\n[[:space:]]*\([^\n]*\)\n[[:space:]]*}/ { s/\({\n[[:space:]]*\([^\n]*\)\n[[:space:]]*}/\1/}' "$1"

# Comando para agregar descripciones a las funciones
# Esto es manual, deberás agregar las descripciones de cada función, por ejemplo:
# (Este paso no es automático, necesitas añadirlo tú)
# sed -i 's/\(.*function_name\)/\/*\n * function_name - Description of what this function does\n \1/' "$1"

# Comando para corregir el return añadiendo paréntesis
sed -i 's/return [^ ]*/return (&)/' "$1"
