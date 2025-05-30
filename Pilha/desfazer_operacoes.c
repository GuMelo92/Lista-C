#include <stdio.h>
#include <string.h>

#define MAX 10
char acoes[MAX][50];
int topo = -1;

void adicionar_acao(const char *acao) {
    if (topo < MAX - 1)
        strcpy(acoes[++topo], acao);
}

void desfazer() {
    if (topo >= 0)
        printf("Desfazendo: %s\n", acoes[topo--]);
    else
        printf("Nada a desfazer.\n");
}

int main() {
    adicionar_acao("Digitei 'Olá'");
    adicionar_acao("Apaguei 'a'");
    desfazer();
    desfazer();
    desfazer();
    return 0;
}
