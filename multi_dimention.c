// two dimentional array

/*#include<stdio.h>
int main()
{
	int arr[2][3]={{1,2,3},{4,5,6}};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	{
		printf("%d ",arr[i][j]);
	}
	printf("\n");
	}
	return 0;
}*/
// first digonal aaray

/*#include<stdio.h>
int main()
{
	
	int arr[3][3]={{7,8,9},{10,11,12},{13,14,15}};
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("%d ",arr[i][i]);
	}
	printf("\n");
	return 0;
}*/

// second digonal aarray

#include<stdio.h>
int main()
{
	
	int arr[3][3]={{7,8,9},{10,11,12},{13,14,15}};
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("%d ",arr[i][2-i]);
	}
	printf("\n");
	return 0;
}
