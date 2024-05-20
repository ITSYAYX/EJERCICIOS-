#include <stdio.h>

int main() {
    int arreglo[88];
    int numeroInicial = 1; // Puedes cambiar este número para iniciar desde otro valor
    int numeroBuscado;
    int encontrado = 0;

    // Llenar el arreglo con números secuenciales a partir de numeroInicial
    for (int i = 0; i < 88; i++) {
        arreglo[i] = numeroInicial + i;
    }

    // Pedir al usuario que ingrese un número para buscar
    printf("Ingrese un numero para buscar en el arreglo: ");
    scanf("%d", &numeroBuscado);

    // Buscar el número en el arreglo
    for (int i = 0; i < 88; i++) {
        if (arreglo[i] == numeroBuscado) {
            printf("Valor encontrado en la posicion %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("No encontrado\n");
    }

    return 0;
}
