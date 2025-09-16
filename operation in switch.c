#include<stdio.h>
int main()
{
	int num1,num2;
	char op;
	printf("Enter Your First Number:");
	scanf("%d",&num1);
	printf("Enter Your Second Number:");
	scanf("%d",&num2);
	printf("Which Operation Have you perform(+,-,*):");
	scanf(" %c",&op);
	
	switch(op){
		case '+':
		printf("sum=%d",num1+num2);
		break;
		
		case '-':
		printf("diff=%d",num1-num2);
		break;
		
		case '*':
		printf("mul=%d",num1*num2);
		break;	
	}	
	return 0;
}
