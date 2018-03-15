#include <stdio.h>

int main(void) 
{
	int n,i, fi1=1,fi2=1,fi3;
	scanf("%d",&n);
	printf("%d \n%d",f1,f2);
	for(i=1;i<n-1;i++)
	{
		fi3=fi1+fi2;
		printf("\n%d",fi3);
		fi1=fi2;
		fi2=fi3;
	}
	return 0;
}
