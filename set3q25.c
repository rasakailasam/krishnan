#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100],i,temp,j,k;
printf("Enter the counter \n Enter the Element");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(k=j+1;k<=n;k++)
{
if(a[j]>=a[k])
{
temp=a[j];
a[j]=a[k];
a[k]=temp;
}
}
printf("%d\f",a[j/2]);
}
