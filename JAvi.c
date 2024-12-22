#include <stdio.h>

int main() {
int j, m, an;
int NJMois[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
printf("Entrer une date en JJ-MM-AAAA: ");
scanf("%d %d %d", &j, &m, &an);
    if (m >= 1 && m <= 12 && j >= 1 && j <= NJMois[m - 1])
    printf("Date valide.\n");
    else {
    printf("Date invalide.\n");
    }
    return 0;
 }
