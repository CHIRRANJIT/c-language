#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

    int i, j;
    int m, k = 4;
    char st[] = "12345";
    for (i = 0; i< 4; i++)
    {
        for (m = 0; m < k; m++)
        {
            printf(" ");
        }
        for (j = 0; j<= i; j++)
        {
            printf("%2c", st[j]);
        }
            printf("\n");
        k--;
    }
    k = k + 2;
    for (i = 3; i> 0; i--)
    {
        for (m = 0; m < k; m++)
        {
            printf(" ");
        }
        for (j = 0; j <i; j++)
        {
            printf("%2c", st[j]);
        }
            printf("\n");
        k++;
    }
}
