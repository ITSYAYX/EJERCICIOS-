#include <stdio.h>

int main() {
    int matriz[9][9];
    int numeroBuscado;
    int i, j;

  
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            matriz[i][j] = i * 9 + j + 1;
        }
    }


    printf("Ingrese un numero para buscar en la matriz: ");
    scanf("%d", &numeroBuscado);

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (matriz[i][j] == numeroBuscado) {
                printf("Numero %d encontrado en la posicion (%d, %d)\n", numeroBuscado, i, j);
                return 0; 
            }
        }
    }

    printf("Numero %d no encontrado en la matriz.\n", numeroBuscado);
    return 0;
}
