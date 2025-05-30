#include <stdio.h>
#include <string.h>

#define MAX 100

void inverter_string(char *str) {
    char pilha[MAX];
    int topo = -1;
    for (int i = 0; str[i] != '\0'; i++)
        pilha[++topo] = str[i];
    for (int i = 0; topo >= 0; i++)
        str[i] = pilha[topo--];
}

int main() {
    char str[] = "Python";
    inverter_string(str);
    printf("Invertida: %s\n", str);
    return 0;
}
