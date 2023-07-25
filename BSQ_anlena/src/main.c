/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:23:00 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/25 16:25:50 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX_LINE_LENGTH 256

int main() {
    // Definir el nombre del archivo
    const char* nombreArchivo = "../misc/map.txt";

    // Abrir el archivo en modo lectura
    int archivo = open(nombreArchivo, O_RDONLY);
    if (archivo == -1) {
        perror("Error al abrir el archivo");
        exit(1);
    }

    // Leer las dimensiones y el carácter de obstáculo del mapa
    int filas, columnas;
    char obstaculo;
    char buffer[MAX_LINE_LENGTH];
    ssize_t bytesLeidos = read(archivo, buffer, MAX_LINE_LENGTH);
    sscanf(buffer, "%d %d %c", &filas, &columnas, &obstaculo);

    // Leer y mostrar el mapa
    while ((bytesLeidos = read(archivo, buffer, MAX_LINE_LENGTH)) > 0) {
        write(STDOUT_FILENO, buffer, bytesLeidos);
    }

    // Cerrar el archivo después de leer
    close(archivo);

    return 0;
}

