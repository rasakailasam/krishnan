#include<stdio.h>
void main()
{
	int n,i,max,a[10];
	printf("\nEnter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
		scanf("%d",&a[i]);
    }
	max=a[0];
	for(i=0;i<n;i++)
	 {
	if(a[0]<a[i])
	 {
		a[0]=a[i];
	 }
	 }
	printf("\nThe maximum number");
	printf("%d",a[0]);
}
