#include <stdio.h>

int main(){


    printf("hola mundo\n");

    int variable1 = 2345;
    int *puntero1 = &variable1;

    printf("el contenido del puntero es: %p\n", puntero1);
    printf("la direccion de memoria almacenada por el puntero es: %p\n", puntero1);
    printf("la direccion de memoria de la variable es: %p\n", &variable1);
    printf("la dirección de memoria del puntero es : %p\n", &puntero1);
    printf("el tamaño de memoria que utiliza la variable es: %zu", sizeof(variable1));


    return 0;
}