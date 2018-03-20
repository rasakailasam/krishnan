#include <stdio.h>

int main() 
{
	int n,a,r,i,c=0;
	printf("enter the number");
	scanf("%d",&n);
	printf("\n enter the 2 numbers");
	scanf("%d %d",&a,&r);
	for(i=a;i<=r;i++)
	{
		if(i==n)
		{
			c++;
		}}
		if(c>0)
		{
			printf("\n yes");
		}else
		{
			printf("\n no");
		}
	return 0;
}
