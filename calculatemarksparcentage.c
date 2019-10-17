//Program to calculate the aggregate and percentage marks
#include<stdio.h>
main()
{
	float s1,s2,s3,s4,s5,aggregate,percentage;		//s1,s2,s3,s4,s5 are the marks of the five subjects, aggregate and percentage are the aggregate and percentage marks

	printf("_____Enter the marks of five subject_____\n");
	printf("First Subject : ");		//take first subject number as input
	scanf("%f",&s1);
	printf("Second Subject : ");	//take second subject number as input
	scanf("%f",&s2);
	printf("Third Subject : ");		//take third subject number as input
	scanf("%f",&s3);
	printf("Fourth Subject : ");	//take fourth subject number as input
	scanf("%f",&s4);
	printf("Fifth Subject : ");		//take fifth subject number as input
	scanf("%f",&s5);

	aggregate = (s1+s2+s3+s4+s5)/5;		//calculation of aggregate
	percentage = (s1+s2+s3+s4+s5)/500*100;	//calculation of percentage

	printf("Aggregate marks is : %.2f \nPercentage marks is : %.2f",aggregate,percentage);
}
