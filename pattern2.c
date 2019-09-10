#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
    int i, j;
    for (i = 1; i< 6; i++)
    {
        for (j = 4; j >= i; j--)
        {
printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
printf("%3d", j);
        }
        for (j = i - 1; j > 0; j--)
        {
printf("%4d", j);
        }
printf(" \n");
    }
getch();
    return 0;
}
