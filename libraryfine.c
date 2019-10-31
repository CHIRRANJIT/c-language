//program to display the amount of fine or the appropriate message
#include<stdio.h>
main()
{
	int days;	//number of late days

	printf("Enter the number of days you late : ");	//taking number of late days as input
	scanf("%d",&days);

	if(days <= 5)						//when the days are below or equal 5 days then per day 50paise charged
		printf("The amount of fine is : %d paise",days*50);

	else if(days >= 6 && days <= 10)	//when the days are grater and equal 6 days and also below or equal 10 days then per day 1rupee charged
		printf("The amount of fine is : %d rupees",days * 1);

	else if(days > 10 && days <= 30)	//when the days are greater 10 days and below or equal 30 days then per day 5rupee charged
		printf("The amount of fine is : %d rupees",days * 5);

	else if(days > 30)					//when the days are greater 30 days then membership is cancelled
		printf("Your membership id cancelled!");
}
