#include <stdio.h>
int main() {
    int I = 1;
    int J = 60;
    while (J >= 0) {
        printf("I=%d J=%d\n", I, J);
        I += 3;
        J -= 5;
    }
    return 0;
}