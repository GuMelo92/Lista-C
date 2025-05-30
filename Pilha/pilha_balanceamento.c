#include <stdio.h>
#include <string.h>

#define MAX 100

int balanceado(const char *exp) {
    char pilha[MAX];
    int topo = -1;
    for (int i = 0; exp[i]; i++) {
        char c = exp[i];
        if (c == '(' || c == '[' || c == '{') {
            pilha[++topo] = c;
        } else if (c == ')' || c == ']' || c == '}') {
            if (topo == -1) return 0;
            char topoChar = pilha[topo--];
            if ((c == ')' && topoChar != '(') ||
                (c == ']' && topoChar != '[') ||
                (c == '}' && topoChar != '{')) {
                return 0;
            }
        }
    }
    return topo == -1;
}

int main() {
    printf("Balanceado? %s\n", balanceado("{[()]}") ? "Sim" : "Não");
    return 0;
}
