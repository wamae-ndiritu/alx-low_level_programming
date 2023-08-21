#!/usr/bin/bash
for source_file in *.c; do
    gcc -c -fPIC "$source_file" -o "${source_file%.c}.o"
done

