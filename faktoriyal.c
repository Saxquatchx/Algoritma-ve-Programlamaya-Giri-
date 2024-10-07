#include <stdio.h>

int main () {
    unsigned long sayi, fac;

    printf("Hesaplanacak sayiyi giriniz: ");
    scanf("%d", &sayi);

    fac = sayi;

    for (int i = (sayi-1); (i > 0) && (i <= sayi); i--)
    {
        fac *= i;
    }

    printf("%d", fac);
    return fac;
}