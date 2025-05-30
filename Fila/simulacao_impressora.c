#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct {
    char nome[50];
    int paginas;
} Documento;

Documento fila[MAX];
int inicio = 0, fim = 0;

void adicionar_documento(const char *nome, int paginas) {
    if ((fim + 1) % MAX == inicio) {
        printf("Fila cheia\n");
        return;
    }
    strcpy(fila[fim].nome, nome);
    fila[fim].paginas = paginas;
    fim = (fim + 1) % MAX;
}

void imprimir_documento() {
    if (inicio == fim) {
        printf("Fila vazia\n");
        return;
    }
    printf("Imprimindo: %s (%d páginas)\n", fila[inicio].nome, fila[inicio].paginas);
    inicio = (inicio + 1) % MAX;
}

int main() {
    adicionar_documento("Trabalho", 5);
    adicionar_documento("Relatório", 3);
    imprimir_documento();
    imprimir_documento();
    imprimir_documento();
    return 0;
}
