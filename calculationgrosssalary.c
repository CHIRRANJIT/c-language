//Program to calculate Ramesh's Gross Salary
#include<stdio.h>
main()
{
	float bs,hra,da,gs;	//bs=Basic Salary, hra=House Rent Allowance, da=Dearness Allowance, gs=Gross Salary

	printf("Enter the Basic Salary : ");
	scanf("%f",&bs);

	da = bs*40/100;		//da is 40% of bs
	hra = bs*20/100;	//hra is 20% of bs
	gs = bs+da+hra;		//gross salary calculation

	printf("Gross Salary is : %.2f",gs);
}
