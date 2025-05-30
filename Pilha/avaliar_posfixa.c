#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int avaliar_posfixa(const char *exp) {
    int pilha[100], topo = -1;
    char *token = strtok((char*)exp, " ");
    while (token != NULL) {
        if (isdigit(token[0])) {
            pilha[++topo] = atoi(token);
        } else {
            int b = pilha[topo--];
            int a = pilha[topo--];
            switch (token[0]) {
                case '+': pilha[++topo] = a + b; break;
                case '-': pilha[++topo] = a - b; break;
                case '*': pilha[++topo] = a * b; break;
                case '/': pilha[++topo] = a / b; break;
            }
        }
        token = strtok(NULL, " ");
    }
    return pilha[topo];
}

int main() {
    char expressao[] = "2 3 +";
    printf("Resultado: %d\n", avaliar_posfixa(expressao));
    return 0;
}
