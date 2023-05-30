#include <stdio.h>

int main() {
    int M, N;
    int i, j;
    int sum;
    while (1) {
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0)
            break;
        sum = 0;
        if (M < N) {
            for (i = M; i <= N; i++) {
                printf("%d ", i);
                sum += i;
            }
        } else {
            for (i = N; i <= M; i++) {
                printf("%d ", i);
                sum += i;
            }
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}
