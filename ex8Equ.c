#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Entrer les coefficients a, b et c: ");
    scanf("%f %f %f", &a, &b, &c);

    float d = b * b - 4 * a * c;
    if (d > 0) {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        printf("Les solutions sont x1 = %.2f et x2 = %.2f\n", x1, x2);
    } else if (d == 0) {
        float x = -b / (2 * a);
        printf("La solution est x = %.2f\n", x);
    } else {
        printf("Pas de solution.\n");
    }

    return 0;
}
