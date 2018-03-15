#include<stdio.h>
void main()
{
int a,b,f;
printf("Enter the number:");
scanf("%d%d",&a,&b);
f=a;
a=b;
b=f;
printf("The swapped numbrs are :%d%d",a,b);
}
