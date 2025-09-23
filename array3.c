// sum of array element
/*#include<stdio.h>
int main()
{
	int sum=0,i,arr[5]={45,13,56,78,67};
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("Arrys List");
	for(i=0;i<length;i++)
	{
		sum+=arr[i];
	}
		printf("\n Total array sum:- %d",sum);
}*/

// revers array
/*#include<stdio.h>
int main()
{
	int i, arr[5]={45,13,56,78,67};

	
	printf("Revers array:");
	for(i=4;i>0;i--)
	{
		printf("\n %d",arr[i]);
	
	}
}*/

// copu array to numder aarrya
#include<stdio.h>
int main()
{ 
int arr2[5]={1,2,3,4,5};
int arr3[5];
int i;
for(i=0;i<5;i++)
{
	arr3[i]=arr2[i];
}
	printf("\n Copy");
	for(i=0;i<5;i++)
	{
		//printf("\n %d",arr3[i]);
	}	
}
