#include<stdio.h>

int main () {
    int j = 4;
    for (int i = 0; i <= 5; i++)
    {
        if (i==3 && j == 4)
        {
            continue;
        }
        printf("i=%d\n",i);
    }
    
}