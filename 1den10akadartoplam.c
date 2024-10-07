#include <stdio.h>

int main () {

    // Declare ediyoruz
    int i,toplam,say1,say2;
    toplam = 0;

    printf("iki adet sayi giriniz: ");
    scanf("%d%d", &say1, &say2);

    i = say1;

    while (i <= say2)
    {
        toplam += i;
        i++;
    }
    
    printf("%d'den %d'a kadar toplam : %d", say1, say2, toplam);

    return toplam;

}