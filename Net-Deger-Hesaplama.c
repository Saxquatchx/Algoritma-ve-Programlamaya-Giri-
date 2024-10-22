#include <stdio.h>
#include <math.h>

int main(){
    int yil, h=0;
    float iskonto, yatirim, toplam = 0, sonuc;

    printf("Lutfen iskonto oraninizi giriniz: ");
    scanf("%f", &iskonto);

    iskonto += 1;    

    printf("Lutfen yatirim miktarinizi giriniz: ");
    scanf("%f",&yatirim);

    printf("Lutfen kac yil net nakit girisi olacagini giriniz: ");
    scanf("%d", &yil);

    float yillikgetiri[yil];
    float yilkadariskontoussu[yil];    

    for (int i = 0; i < yil; i++)
    {
        printf("%d. yil kac tl nakit girisi olacagini giriniz: ", i+1);
        scanf("%f",&yillikgetiri[i]);
    }

    double iskontoamadouble = iskonto;

    for (double z = 0; z < yil; z++)
    { 
        yilkadariskontoussu[h] = pow(iskontoamadouble, z+1);
        h++;
    }

    for (int k = 0; k < yil; k++)
    {
        toplam += (yillikgetiri[k] / (yilkadariskontoussu[k]));
    }
    
    sonuc = toplam-yatirim;

    printf("Sonucumuz =%f \n", sonuc);
    if (sonuc > 0)
    {
        printf("Sonucumuz 0'dan buyuk oldugu icin yatirim yapmaniz tavsiye edilir.");
    } else {
        printf("Sonucumuz 0'dan buyuk olmadigi icin yatirim yapmaniz tavsiye edilmez!!");
    }
}