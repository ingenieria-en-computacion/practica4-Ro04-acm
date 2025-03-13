#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define la estructura del estudiante
typedef struct {
    char nombre[50];
    int edad;
} Estudiante;

int main() {
    int size = 2;
    Estudiante *estudiantes = malloc(size * sizeof(Estudiante)); // Crea un arreglo dinamico de estudiantes

    if (estudiantes == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    int count = 0;
    printf("Ingrese estudiantes (nombre y edad, ingrese 'fin' para terminar):\n");

    while (1) {
        printf("Nombre: ");
        // Copia directamente el nombre ingresado al arreglo
        scanf("%s", estudiantes[count].nombre);

        if (strcmp(estudiantes[count].nombre, "fin") == 0)
            break;

        printf("Edad: ");
        scanf("%d", &estudiantes[count].edad);

        // Verifica si necesitas aumentar el tamano del arreglo dinamico
        if (count + 1 >= size) {
            size *= 2;
            Estudiante *tmp = realloc(estudiantes, size * sizeof(Estudiante));

            if (tmp == NULL) {
                printf("Error: No se pudo reasignar memoria.\n");
                free(estudiantes);
                return 1;
            }
            estudiantes = tmp;
        }

        count++;
    }

    printf("Lista de estudiantes:\n");
    for (int i = 0; i < count; i++) {
        printf("Estudiante %d:\n", i + 1);
        printf("Nombre: %s\n", estudiantes[i].nombre);
        printf("Edad: %d\n", estudiantes[i].edad);
    }

    // Libera la memoria al finalizar
    free(estudiantes);

    return 0;
}

