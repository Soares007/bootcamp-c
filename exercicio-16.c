#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    for (i = 1; i <= 10; i++) {
        int resultado = i * N;
        printf("%d x %d = %d\n", i, N, resultado);
    }
    return 0;
}