#include <stdio.h>

int main() {
int mois, annee, jours;

printf("Mois: ");
scanf("%d", &mois);
printf("Annee: ");
scanf("%d", &annee);

switch (mois) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    jours = 31;
    break;
    case 4: case 6: case 9: case 11:
    jours = 30;
    break;
    case 2:
        if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0))
        jours = 29;
        else
        jours = 28;
        break;
        default:
        printf("Mois invalide.\n");
        return 1;
            }
printf("Nombre de jours: %d\n", jours);
return 0;
}
