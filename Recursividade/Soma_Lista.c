#include <stdio.h>

int soma(int *lista, int tamanho) {
    if (tamanho == 0) return 0;
    return lista[0] + soma(lista + 1, tamanho - 1);
}

int main() {
    int lista[] = {1, 2, 3, 4, 5};
    printf("Soma: %d\n", soma(lista, 5));
    return 0;
}
