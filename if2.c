#include<stdio.h>
int main(){
	int Battery;
	printf("Enter your Battery Power:");
	scanf("%d",&Battery);
	if(Battery<20)
	{
		printf("Low Battery!! Charge Your Phone");
	}
}
