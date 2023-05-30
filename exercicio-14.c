#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    for (i = 2; i <= N; i += 2) {
        int quadrado = i * i;
        printf("%d^2 = %d\n", i, quadrado);
    }
    return 0;
}
