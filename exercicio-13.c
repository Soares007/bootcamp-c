#include <stdio.h>

int main() {
    int X, Y;
    int i, soma = 0;
    scanf("%d %d", &X, &Y);
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }
    for (i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    printf("%d\n", soma);
    return 0;
}
