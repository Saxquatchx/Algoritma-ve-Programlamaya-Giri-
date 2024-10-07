#include <stdio.h>

// Ön işlemci direktifi = #

int main () {
    int i,say1,say2,artim;
    printf("iki tam sayi giriniz:");
    scanf("%d%d", &say1, &say2);
    i = say1;
    while (i <= say2)
    {
        printf("%d ", i);
        i++;
    }
}