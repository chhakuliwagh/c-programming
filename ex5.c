#include<stdio.h>
int main()
{
	int apple_p=20;
	int oil_p=10;
	int milk_p=60;

	int appleQ,oilQ,milkQ;
	int total;
	int paid;
	
	printf("Apple Qty:");
	scanf("%d",&appleQ);
	printf("Oil Qty :");
	scanf("%d",&oilQ);
	printf("milk Qty :");
	scanf("%d",&milkQ);
	
	total=(appleQ*apple_p)+(oilQ*oil_p)+(milkQ*milk_p);
	printf("\nTotal amount Of =%d",total);
	
	printf("\nenter amout by customer:");
	scanf("%d",&paid);
	
	printf("\nchange to return =%d \n",paid-total);
	
	return 0;
}
