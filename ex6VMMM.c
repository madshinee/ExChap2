#include <stdio.h>

int main() {
    int a, b, c;
    int max, min;
    float M;
    printf("Entrez 3 entiers : ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    min = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    M = (a + b + c) / 3;
    printf("Vaeur max : %d\n", max);
    printf("Valeur min : %d\n", min);
    printf("Moyenne : %.2f\n", M);

    return 0;
}
