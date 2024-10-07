#include <stdio.h>

int main () {
    int sayi, i, test=1;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    // Eğer sayımız 1 olursa asal sayı olamaz bug olmaması adına bu koşulu ekliyoruz.
    if (sayi==1)
    {
        test=0;
    } else {
        // Girilen sayıyı bir azaltıyoruz ve koşulu öne sürüyoruz.
        // Koşulumuz eğer sayımız 1'den büyükse ve test atamamız hala 1 ise döngüyü çalıştırıyoruz.
        // i'yi 1 eksiltiyoruz.
        for (int i = sayi-1; i > 1 /*&& test == 1*/; i--)
        {
            // Burada sayının i'ye bölümünden kalanın 0 olup olmadığını kontrol ediyoruz.
            if (sayi%i == 0)
            {
                printf("Bolunebilen sayi: %d\n", i);
                test = 0;
            }          
        }       
    }
    if (test > 0)
    {
        printf("Sayi asal sayidir");
    } else {
        printf("Sayi asal sayi degildir\n");
    } 
    return 0;
}