#include<stdio.h>
int main()
{
	int age;
	printf("Enter Your Age:");
	scanf("%d",&age);
	
	printf("Eligible for vote:%d",age>=18);
}
