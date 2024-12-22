#include <stdio.h>

int main() {
int h, m, s;

printf("Entrer heure en H, mn et s : ");
scanf("%d %d %d", &h, &m, &s);

s++;
if (s == 60)
{
    s = 0;
    m++;
if (m == 60)
{
    m = 0;
    h++;
if (h == 24)
{
    h = 0;
}
}
}
printf("Heure + 1s: %02d:%02d:%02d\n", h, m, s);
return 0;
}
