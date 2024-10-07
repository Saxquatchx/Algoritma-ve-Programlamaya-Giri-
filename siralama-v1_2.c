#include <stdio.h>

int siralama(int arrayuzunlugu, int gelenarray[]) {
    int i, j, yeniIndex, yeniarray[arrayuzunlugu];

    for (i = 0; i <= arrayuzunlugu; i++)
    {
        for (j = 0; j <= arrayuzunlugu; j++)
        {
            if (gelenarray[i] > gelenarray[j])
            {
                yeniIndex++;
            } else if (gelenarray[i] < gelenarray[j]) {
                yeniIndex--;
            } else {
                yeniIndex = yeniIndex;
            }

            yeniarray[yeniIndex] = gelenarray[i];
            printf("%d", yeniarray[yeniIndex]);
        }
        
    }
    for (int i = 0; i < arrayuzunlugu; i++)
    {
        printf("%d", yeniarray[i]);
    }
    
    
}

int main() {
    int birarray[] = {5, 7, 8, 9, 6, 3};
    siralama(sizeof(birarray) / sizeof(birarray[0]),birarray);
}