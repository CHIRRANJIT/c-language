//Program to calculte the sum of first and last digit
#include<stdio.h>
main()
{
	int firstDigit,lastDigit,number,sum=0;	//firstDigit=first digit of the number, lastDigit=last digit of the number, number=input number, sum=sum of first and last digit

	printf("Enter the number : ");	//take the number as input
	scanf("%d",&number);

	lastDigit = number % 10;	//find the last digit of the number

	firstDigit = number;	//find the first digit of the number
	while(firstDigit >= 10)
	{
		firstDigit = firstDigit/10;
	}

	sum = firstDigit + lastDigit;	//sum of the first and last digit

	printf("Sum of the first and last digit is : %d",sum);
}
