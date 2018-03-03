#include <stdio.h>

void main() 
{
	int n,a[100],i,add=0,ans;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
  add=add+a[i];
	}
	ans=add/n;
	printf("%d",ans);
	
	return 0;
}
