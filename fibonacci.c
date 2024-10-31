#include<stdio.h>

int main () {

    int a = 1,b = 1,c,sayi;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    for (c = 1;c<=sayi;)
    {
        printf("%d\n",c);
        c = a+b;
        a=b;
        b=c;
    }  

}