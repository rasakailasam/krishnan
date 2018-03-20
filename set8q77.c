
#include <stdio.h>

int main(void)
{
	int a,i;
	printf("\n enter the number");
	scanf("%d",&a);
	printf("\n factors are");
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		printf("\n %d\t",i);
	}

	return 0;
}
