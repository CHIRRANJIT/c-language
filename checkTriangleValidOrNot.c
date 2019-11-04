//program to check a triangle is valid or not
#include<stdio.h>
main()
{
	int l1,l2,l3;	//l1,l2 and l3 are the three sides of a triangle

	printf("Enter the three sides of the triangle : ");	//taking three sides as input
	scanf("%d %d %d",&l1,&l2,&l3);

	if((l1+l2 > l3) && (l1+l3 > l2) && (l2+l3 > l1))	//when sum of two sides are greater than third, then valid
		printf("Triangle is valid");

	else												//when triangle is not valid
		printf("Triangle is not valid");
}
