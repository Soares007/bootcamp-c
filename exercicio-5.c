#include <stdio.h>
int main() {
    int distancia;
    double combustivel, consumoMedio;
    scanf("%d", &distancia);
    scanf("%lf", &combustivel);
    consumoMedio = distancia / combustivel;
    printf("%.3lf km/l\n", consumoMedio);
    return 0;
}
