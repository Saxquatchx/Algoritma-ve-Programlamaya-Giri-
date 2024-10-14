#include<stdio.h>

int main(){

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