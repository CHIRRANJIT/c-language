//Program to calculate the cost price of one item
#include<stdio.h>
main()
{
	float sellingPrice,costPrice,profit;	//sellingPrice=selling price of 15 items, costPrice = cost price of one item, profit = profit of 15 items

	printf("Enter the Selling Price of  items : ");	//selling price of 15 items taking input
	scanf("%f",&sellingPrice);

	printf("Enter the total profit of  items : ");	//profit of 15 items taking input
	scanf("%f",&profit);

	costPrice = (sellingPrice - profit)/15;		//calculate the cost price of one item

	printf("Cost price of one item is : %.2f",costPrice);
}
