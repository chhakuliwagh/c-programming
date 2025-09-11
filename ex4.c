#include<stdio.h>
int main()
{
	int apple_p=20;
	int oil_p=10;
	int milk_p=60;

	int apple,oil,milk;
	int total;
	int paid;
	
	printf("\nApple Qty:");
	scanf("\n%d",&apple);
	printf("\nOil Qty :");
	scanf("\n%d",&oil);
	printf("\nmilk Qty :");
	scanf("\n%d",&milk);
	
	//printf("\nTotal amount=%d",apple_p+oil_p+milk_p);
	//scanf("\n%d",&total);
	
	total=(apple*apple_p)+(oil*oil_p)+(milk*milk_p);
	return 0;
}
