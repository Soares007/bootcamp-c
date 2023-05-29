#include <stdio.h>
int main() {
    int codigo, quantidade;
    double valor;
    scanf("%d %d", &codigo, &quantidade);
    switch (codigo) {
        case 1:
            valor = 4.00;
            break;
        case 2:
            valor = 4.50;
            break;
        case 3:
            valor = 5.00;
            break;
        case 4:
            valor = 2.00;
            break;
        case 5:
            valor = 1.50;
            break;
        default:
            printf("Código inválido.\n");
            return 0;
    }
    double total = valor * quantidade;
    printf("Total: R$ %.2lf\n", total);
    return 0;
}