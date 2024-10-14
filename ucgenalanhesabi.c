#include<stdio.h>

int main() {
    int yukseklik,alt_taban;

    printf("Yuksekligi giriniz: ");
    scanf("%d", &yukseklik);
    printf("Alt tabani girin: ");
    scanf("%d", &alt_taban);

    int alan = (alt_taban*yukseklik)/2;    

    printf("Alan: %d",alan);
}