//Program to compute the smallest number of notes to give Rs.N.
#include<stdio.h>
main()
{
	int rs100,rs50,rs10,rs5,rs2,rs1,rs;		//number of notes of 100,50,10,5,2 and 1

	printf("Enter the Rs. : ");		//take the rs as N in the input
	scanf("%d",&rs);

	printf("_____Number of notes_____\n");

	//compute the number of notes of 100
	rs100 = rs/100;
	rs = rs%100;

	//compute the number of notes of 50
	rs50 = rs/50;
	rs = rs%50;

	//compute the number of notes of 10
	rs10 = rs/10;
	rs = rs%10;

	//compute the number of notes of 5
	rs5 = rs/5;
	rs = rs%5;

	//compute the number of notes of 2
	rs2 = rs/2;

	//compute the number of notes of 1
	rs1 = rs%2;

	printf("Rs100 = %d \nRs50 = %d \nRs10 = %d \nRs50 = %d \nRs2 = %d \nRs1 = %d",rs100,rs50,rs10,rs5,rs2,rs1);
}
