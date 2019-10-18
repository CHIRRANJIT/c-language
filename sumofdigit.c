//Program to calculate the sum of digits of a number
#include<stdio.h>
main()
{
	int number,remainder,sod=0;		//sod=sum of digits

	printf("Enter the number : ");
	scanf("%d",&number);

	while(number != 0)	//calculate sum of digits while number is not equal to 0
	{
		remainder = number % 10;
		sod = sod + remainder;
		number = number / 10;
	}

	printf("Sum of digits of is : %d",sod);
}
