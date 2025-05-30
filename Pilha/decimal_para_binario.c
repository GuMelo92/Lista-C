#include <stdio.h>

void decimal_para_binario(int n) {
    int pilha[32], topo = -1;
    if (n == 0) {
        printf("0\n");
        return;
    }
    while (n > 0) {
        pilha[++topo] = n % 2;
        n /= 2;
    }
    while (topo >= 0) {
        printf("%d", pilha[topo--]);
    }
    printf("\n");
}

int main() {
    decimal_para_binario(10);
    return 0;
}
