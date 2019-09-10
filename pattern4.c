
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
    int i, j, k, m = 0 ;
        for ( i = 5 ; i >= 1 ; i --)
        {
            for ( j = 1 ; j <= i ; j++ )
            {
                printf("%d", j);
            }
            for ( k = 1 ; k <= m ; k++ )
            {
                printf("") ;
            }
            for ( j = i ; j >= 1 ; j -- )
            {
                printf("%d", j);
            }
            printf("\n");
            m+=2;
        }
getch();
    return 0;
}
