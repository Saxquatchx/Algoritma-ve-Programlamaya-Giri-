#include<stdio.h>

int main () {
    char a[] = {"evet yaptim"};
    int auzunlugu = sizeof(a) / sizeof(a[1]);
    printf("arr uzunlugu: %d\nArray: ", auzunlugu);

    for (int i = 0; i < auzunlugu; i++)
    {
        printf("%c",a[i]);
    }
    
    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}