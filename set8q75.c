#include <stdio.h>
#include<string.h>

int main()
{
	char a[10];
	int i,n;
	printf("\n enter the string");
	scanf("%s",&a);
	n=strlen(a);
	if(n%2==0)
	{
		for(i=0;i<=n;i++)
	{
		if(i<((n/2)-1))
		printf("%c",a[i]);
		if(i==(n/2))
		printf("*");
		if(i==((n/2)-1))
		printf("*");
		if(i>=((n/2)+1))
		printf("%c",a[i]);
	}
	}
	if(n%2!=0)
	{
		for(i=0;i<=n;i++)
		{
	if(i<(n/2))
	printf("%c",a[i]);
	if(i==n/2)
	printf("*");
	if(i>(n/2))
	printf("%c",a[i]);
	}
	}
	return 0;
}
