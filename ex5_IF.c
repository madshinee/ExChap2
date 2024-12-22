#include <stdio.h>

int main() {
int n;
printf("Entrer un nombre entier: ");
scanf("%d", &n);

    if (n == 0) {
        printf("NUL\n");
    } else if (n == 1 || n == 2) {
        printf("PETIT\n");
    } else if (n == 3) {
        printf("MOYEN\n");
    } else if (n == 4 || n == 5) {
        printf("GRAND\n");
    } else {
        printf("HORS NORME\n");
    }


}

