#include <stdio.h>
int main() {
    double valores[6];
    int i, contador = 0;
    double soma = 0.0;
    for (i = 0; i < 6; i++) {
        scanf("%lf", &valores[i]);
        if (valores[i] > 0) {
            contador++;
            soma += valores[i];
        }
    }
    printf("%d valores positivos\n", contador);
    double media = soma / contador;
    printf("%.1lf\n", media);
    return 0;
}