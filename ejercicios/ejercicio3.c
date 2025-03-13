#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 2; // Asigna un numero pequeño como tamano inicial
    int *arr = (int *)malloc(size * sizeof(int)); // Reserva memoria con malloc

    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    int count = 0;
    int num;
    printf("Ingrese numeros (ingrese -1 para terminar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == -1) break; // Rompe el ciclo cuando el numero es -1

        if (count >= size) {
            size *= 2;
            int *tmp = (int *)realloc(arr, size * sizeof(int)); // Utiliza realloc para cambiar el tamano del arreglo
            if (tmp == NULL) {
                printf("Error: No se pudo reasignar memoria.\n");
                free(arr); // Libera la memoria previamente asignada
                return 1;
            }
            arr = tmp;
        }

        arr[count++] = num; // Asigna el numero ingresado al arreglo
    }

    printf("La lista ingresada es: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);  // Imprime la lista
    }
    printf("\n");

    // Libera la memoria
    free(arr);
    return 0;
}
