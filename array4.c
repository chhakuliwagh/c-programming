// Even,odd number

#include<stdio.h>
int main()
{
	int i,arr[6]={1,2,3,4,5,6};
	int eve=0,odd=0;
	printf("Even and odd number");
	for(i=0;i<6;i++)
	{
		if(arr[i]%2==0)
		{
		//	print("even");
			eve++;
		}
		else{
			//printf("Odd");
			odd--;
		}
		
	}
	printf("even count=%d ,odd count=%d",eve,odd);
	return 0;
}
