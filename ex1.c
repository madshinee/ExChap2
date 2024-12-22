#include <stdio.h>

int main()
{
int n;
printf("Entrer un nombre entier: ");
scanf("%d", &n);
if (n > 0) {
printf("Nombre positif.\n");}
else if (n < 0) {
printf("Nombre négatif.\n");}
else {
        printf("Nombre null.\n");}
return 0;
}
