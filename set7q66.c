#include<stdio.h>
void main()
{
int i,a,b=0;
printf("Enter the value a:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
b++;
}
}
if(b==2)
{
printf("The Number is prime");
}
else
{
printf("Not a Prime");
}
}
