// Array
#include<stdio.h>
int main()
{
	int i,marks[5]={45,13,56,78,67};
	printf("Arrys List");
	for(i=0;i<5;i++)
	{
		printf("\n %d",marks[i]);
	}
	marks[1]=55;
	marks[4]=90;
	printf("\n Updated Arrys List");
	for(i=0;i<5;i++)
	{
		printf("\n %d",marks[i]);
	}
	return 0;
}
