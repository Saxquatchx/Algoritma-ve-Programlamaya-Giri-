#include <stdio.h>

int main () {
    int sayi = 45, i, j, kontrol = 1;

    j = sayi/2;

    for (i = 2; (i <= j) && (kontrol==1); i++)
    {
        if (sayi%i==0)
        {
            kontrol = 0;
        }
        
    }

    if (kontrol == 0)
    {
        printf("%d sayisi asal degildir.", sayi);
    } else {
        printf("%d sayisi asaldir.", sayi);
    }
    
    
}