#include<stdio.h>

int main() {
    int birinci_kenar,ikinci_kenar,ucuncu_kenar;

    printf("ilk kenari giriniz: ");
    scanf("%d", &birinci_kenar);
    printf("ikinci kenari giriniz: ");
    scanf("%d", &ikinci_kenar);
    printf("Ucuncu kenari girin: ");
    scanf("%d", &ucuncu_kenar);

    if (birinci_kenar == ikinci_kenar && birinci_kenar != ucuncu_kenar /*&& ikinci_kenar != ucuncu_kenar*/){
        printf("Ucgenimiz ikizkenardir");
    } else if (birinci_kenar == ucuncu_kenar && birinci_kenar != ikinci_kenar /*&& ikinci_kenar != ucuncu_kenar*/) {
        printf("Ucgenimiz ikizkenardir");
    } else if (ikinci_kenar == ucuncu_kenar && ikinci_kenar != birinci_kenar /*&& birinci_kenar != ucuncu_kenar*/) {
        printf("Ucgenimiz ikizkenardir");
    }
     else if (birinci_kenar == ikinci_kenar == ucuncu_kenar){
        printf("Ucgenimiz eskenardir");
    } else {
        printf("Ucgenin cesitkenardir");
    }
    }