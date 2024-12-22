#include <stdio.h>
#include <ctype.h>

int main() {
char lettre;
printf("Entrer une lettre: ");
scanf(" %c", &lettre);
if (isupper(lettre))
lettre = tolower(lettre);
else if (islower(lettre))
lettre = toupper(lettre);
printf("Lettre inverse: %c\n", lettre);
return 0;
}
