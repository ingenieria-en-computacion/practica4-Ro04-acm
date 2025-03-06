#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int *arr;
    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Ingrese %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Ingresa el valor %d \n",i+1);
            scanf("%d", (arr));
    }

    printf("El arreglo es: ");
    for (int i = 0; i < n; i++) {
        printf("\t %d %p", *(arr),(arr+i));
    }
    printf("\n");

    
    return 0;
}
