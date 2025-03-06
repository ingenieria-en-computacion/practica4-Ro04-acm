#include <nodo.h>
#include <stdio.h>
#include <stdlib>
int main(){
    nodo *primero=NULL;
    priomero= crear_nodo(1);
    printf("%p\n", primero);
    print_nodo(primero);

    primero->sig = crear_nodo(2);
    printf("%p\n", primero->sig);
    print_nodo(primero->sig);

    borrar_nodo(primero->sig);
    borrar_nodo(primero);
    return 0;    
}