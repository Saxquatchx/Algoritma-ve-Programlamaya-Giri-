#include<stdio.h>

int main () {

    int sayi,i,faktoriyel = 1;

    printf("Lutfen sayi degerini giriniz: ");
    scanf("%d", &sayi);

    for (i = 1; i <= sayi; i++)
    {
        faktoriyel = i*faktoriyel;
        printf("Faktoriyelimizn %d. degeri = %d\n",i,faktoriyel);
    }
    printf("Faktoriyelimizin degeri = %d",faktoriyel);

}