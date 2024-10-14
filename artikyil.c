#include<stdio.h>

int main(){

    // 2000-2024 arasını kontrol etme

    for (int i = 2000; i <= 2024; i++)
    {
        if (i%4 == 0)
        {
            printf("%d bir artik yildir.\n",i);
        } else {
            printf("%d bir artik yil degildir.\n", i);
        }
    }
    
    // Bir yılı veri olarak alıp kontrol etme

    int yil;

    printf("Yil girin: ");
    scanf("%d",&yil);

    if (yil%4 == 0)
    {
        printf("Artik yil");
    } else {
        printf("Artik yil degil");
    }
}