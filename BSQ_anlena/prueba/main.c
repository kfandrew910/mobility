#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX_LENGTH 1000

int main() {
    // Definir el nombre del archivo
    const char* nombreArchivo = "ejemplo.txt";

    // Abrir el archivo en modo lectura
    int archivo = open(nombreArchivo, O_RDONLY);
    if (archivo == -1) {
        perror("Error al abrir el archivo");
        exit(1);
    }

    // Leer la línea del archivo en un buffer
    char buffer[MAX_LENGTH];
    ssize_t bytesLeidos = read(archivo, buffer, MAX_LENGTH - 1);
    if (bytesLeidos == -1) {
        perror("Error al leer el archivo");
        close(archivo);
        exit(1);
    }

    // Cerrar el archivo después de leer
    close(archivo);

    // Asegurar que el buffer tenga un terminador nulo para imprimir correctamente como string
    buffer[bytesLeidos] = '\0';

    // Imprimir el string leído del archivo
    printf("Contenido del archivo:\n%s", buffer);

    return 0;
}

