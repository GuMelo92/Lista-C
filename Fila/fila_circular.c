#include <stdio.h>

#define MAX 5
int fila[MAX], inicio = 0, fim = 0, tamanho = 0;

void enfileirar(int val) {
    if (tamanho == MAX) {
        printf("Fila cheia\n");
        return;
    }
    fila[fim] = val;
    fim = (fim + 1) % MAX;
    tamanho++;
}

void desenfileirar() {
    if (tamanho == 0) {
        printf("Fila vazia\n");
        return;
    }
    printf("Removido: %d\n", fila[inicio]);
    inicio = (inicio + 1) % MAX;
    tamanho--;
}

int main() {
    enfileirar(1);
    enfileirar(2);
    enfileirar(3);
    enfileirar(4);
    enfileirar(5);
    desenfileirar();
    enfileirar(6);
    return 0;
}
