#include<stdio.h>
int main()
{
	int apple_p=100;
	int oil_p=155;
	int milk_p=60;

	int apple,oil,milk,total;
	
	printf("\nApple Qty:");
	scanf("\n%d",&apple);
	printf("\nOil Qty :");
	scanf("\n%d",&oil);
	printf("\nmilk Qty :");
	scanf("\n%d",&milk);
	printf("\nTotal amount=%d",apple_p+oil_p+milk_p);
	scanf("\n%d",&total);
	return 0;
}
