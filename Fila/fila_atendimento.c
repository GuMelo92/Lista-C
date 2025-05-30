#include <stdio.h>
#define MAX 10

int fila[MAX], inicio = 0, fim = 0;

void enfileirar(int cliente) {
    if (fim < MAX) fila[fim++] = cliente;
}

void atender() {
    if (inicio < fim)
        printf("Atendendo cliente %d\n", fila[inicio++]);
    else
        printf("Fila vazia\n");
}

int main() {
    enfileirar(101);
    enfileirar(102);
    atender();
    atender();
    atender();
    return 0;
}
