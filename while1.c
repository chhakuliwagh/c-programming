//While Loop
#include<stdio.h>
int main()
{
	int battery=100;  //initilization
	while(battery>0)
	{
		printf("\n Battery : %d",battery);
		battery-=20;
	}
	printf("\n Battery Empty");
	return 0;
	
}
