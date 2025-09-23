#include<stdio.h>
int main()
{
	int marks[5];
	int i;
	printf("Enter Your Marks:\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}

	printf("\n Updated Arrys List");
	for(i=0;i<5;i++)
	{
		printf("\n %d",marks[i]);
	}
}
