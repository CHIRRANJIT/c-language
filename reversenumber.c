//Program to reverse a number
#include<stdio.h>
main()
{
	int number,reverse=0;	//reverse=reverse of the number

	printf("Enter the number : ");
	scanf("%d",&number);

	while(number != 0)
	{
		reverse = (reverse * 10) + (number % 10);
		number = number / 10;
	}

	printf("Reverse number is : %d",reverse);
}
