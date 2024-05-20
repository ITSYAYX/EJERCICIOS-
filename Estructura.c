#include <stdio.h>

struct Registro {
    int id;
    int notap;
    int notas;
};

int main() {

    struct Registro registros[3] = {
        {1, 85, 90},
        {2, 78, 82},
        {3, 92, 88}
    };

    int notaBuscada;
    int i;

    printf("Ingrese una nota para buscar en notap: ");
    scanf("%d", &notaBuscada);

    for (i = 0; i < 3; i++) {
        if (registros[i].notap == notaBuscada) {
            printf("Valor encontrado en id = %d\n", registros[i].id);
            return 0;
        }
    }

    printf("No encontrado\n");
    return 0;
}
