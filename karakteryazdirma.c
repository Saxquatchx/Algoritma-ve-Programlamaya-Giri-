#include <stdio.h>

int main () {
    char harf;

    for (harf = 1; harf <= 125; harf=harf+1)
    {
        printf("Karakter:'%2c' Pointeri: ", harf);
        printf("%p\n", harf);
    }
}