#include <stdio.h>

int main(void) {
    int n;
    int k = 0;
    double a, b, c;

    scanf("%d", &n); 

    for (int i = 1; i <= n; i++) {
        scanf("%lf %lf %lf", &a, &b, &c);

        if (a < (b + c) && b < (a + c) && c < (a + b)) {
            k = k + 1;
        }
    }

    printf("%d\n", k);

    return 0;
}
