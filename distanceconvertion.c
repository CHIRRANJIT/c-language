//Program to convert the distance
#include<stdio.h>
main()
{
	float km,meters,centimeters,feet,inches;

	printf("Enter the distance : ");
	scanf("%f",&km);		//take km distance as input

	//distance conversion
	meters = km*1000;
	centimeters = km*10e4;
	inches = km*39370.0787;
	feet = km*3280.8399;

	printf("_____Converated Distances_____\n");
	printf("Meters = %.2f \nCentimeters = %.2f \nFeet = %.2f \nInches = %.2f",meters,centimeters,feet,inches);
}
