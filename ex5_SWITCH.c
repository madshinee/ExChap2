#include <stdio.h>

int main() {
    int n;
    printf("Entrer un nombre entier: ");
    scanf("%d", &n);

    switch (n) {
    case 0:
    printf("NUL\n");
    break;
    case 1:
    case 2:
    printf("PETIT\n");
    break;
    case 3:
    printf("MOYEN\n");
    break;
    case 4:
    case 5:
    printf("GRAND\n");
    break;
    default:
    printf("HORS NORME\n");
    break;
    }
    return 0;
}
