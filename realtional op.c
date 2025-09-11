#include<stdio.h>
int main()
{
	int n1 ,n2;
	printf("Enter First Number:");
	scanf("%d",&n1);
	printf("Enter Second Number");
	scanf("%d",&n2);
	
	printf("Relational operator Result:\n");
	printf("n1==n2 : %d \n",n1==n2);
	printf("n1!=n2 : %d \n",n1!=n2);
    printf("n1<n2 : %d \n",n1<n2);
    printf("n1>n2 : %d \n",n1>n2);
	printf("n1<=n2 : %d \n",n1<=n2);
	printf("n1>=n2 : %d \n",n1>=n2);
	
	return 0;
}
