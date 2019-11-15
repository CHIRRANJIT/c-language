//Program to print a number after adding 1 with each digit
#include<stdio.h>
main()
{
	int n,a,b,c,d,e,sum=0;	//n = five digit number, a,b,c,d and e are the 1st to 5th digit and sum = the number after adding 1 with each digit

	printf("Enter the five digit number : ");	//taking the five digit number as input
	scanf("%d",&n);

	//compute the five digits of the nunber
	a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    e=(n/10000)%10;

    //compute the number after adding 1 with each digit
    sum=(a+1)+(b+1)*10+(c+1)*100+(d+1)*1000+(e+1)*10000;

    printf("After adding 1 with each digit the number is : %d",sum);
}
