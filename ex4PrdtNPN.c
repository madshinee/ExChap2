#include <stdio.h>

int main()
 {
    int a, b;
    printf("Entrer 2 nombres entiers: ");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0) {
        printf("Produit nul.\n");
    } else if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
        printf("Produit positif.\n");
    } else {
        printf("Produit négatif.\n");
    }

    return 0;
}
