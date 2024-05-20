#include <stdio.h>

int main() {
    int matriz[9][9];
    int numeroBuscado;
    int i, j;

    // Llenar la matriz con números secuenciales
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            matriz[i][j] = i * 9 + j + 1;
        }
    }

    // Pedir al usuario que ingrese un número para buscar
    printf("Ingrese un numero para buscar en la matriz: ");
    scanf("%d", &numeroBuscado);

    // Buscar el número en la matriz
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (matriz[i][j] == numeroBuscado) {
                printf("Numero %d encontrado en la posicion (%d, %d)\n", numeroBuscado, i, j);
                return 0; // Termina el programa después de encontrar el número
            }
        }
    }

    printf("Numero %d no encontrado en la matriz.\n", numeroBuscado);
    return 0;
}
