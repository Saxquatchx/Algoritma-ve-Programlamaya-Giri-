#include<stdio.h>

int main () {

    int sayi, kuvvet, sonuc=1;

    printf("Kuvveti hesaplanacak olan sayiyi giriniz: ");
    scanf("%d", &sayi);
    if (sayi < 0) return printf("Pozitif bir sayi girmelisiniz.");
    printf("Kuvveti giriniz: ");
    scanf("%d", &kuvvet);
    if (kuvvet < 0) return printf("Pozitif bir kuvvet girmelisiniz.");

    for (int j = 1; j <= sayi; j++)
    {
        for (int z = 1; z <= kuvvet; z++)
        {
            sonuc *= j;
            printf("%d sayisinin %d. kuvveti %d'dir.\n", j, z, sonuc);
        }
        sonuc = 1;    
    }
    
    /*for (int i = 1; i < kuvvet+1; i++)
    {
        sonuc *= sayi;
        printf("%d sayisinin %d. kuvveti %d'dir.\n", sayi, i, sonuc);
    }*/
    //printf("%d sayisinin %d. kuvveti %d'dir.", sayi, kuvvet, sonuc);
}