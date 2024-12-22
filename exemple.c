#include <stdio.h>

int main() {
    int N, facto, cpt, i, j;

entree:
    puts("Entrer un entier positif, pair, divisible par 10 et multiple de 5: ");
    scanf("%d", &N);
    if (!(N > 0 && N % 2 == 0 && N % 10 == 0 && N % 5 == 0)) {
        goto entree;
    }
    for (i = 1; i <= N; i++) {
        cpt = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                cpt++;
            }
        }
        if (cpt == 2) {
            facto = 1;
            for (j = 1; j <= i; j++) {
                facto *= j;
            }
            printf("Le factoriel de %d est %d\n", i, facto);
        }
    }

    return 0;
}


