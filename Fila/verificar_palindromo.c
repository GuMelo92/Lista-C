#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int eh_palindromo(const char *str) {
    char pilha[MAX], fila[MAX];
    int topo = -1, inicio = 0, fim = 0;

    for (int i = 0; str[i]; i++) {
        if (isalnum(str[i])) {
            char c = tolower(str[i]);
            pilha[++topo] = c;
            fila[fim++] = c;
        }
    }

    for (int i = 0; i < fim; i++)
        if (fila[i] != pilha[topo--])
            return 0;
    return 1;
}

int main() {
    printf("Eh palindromo? %s\n", eh_palindromo("arara") ? "Sim" : "Não");
    return 0;
}
