#include <stdio.h>

int main() {
    int arreglo[88];
    int numeroInicial = 1; 
    int numeroBuscado;
    int encontrado = 0;

   
    for (int i = 0; i < 88; i++) {
        arreglo[i] = numeroInicial + i;
    }

   
    printf("Ingrese un numero para buscar en el arreglo: ");
    scanf("%d", &numeroBuscado);

  
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
