#include<stdio.h>
#include<conio.h>
void main()
{
int s=0,remainder,n,n1;
scanf("%d",&n);
while(n=0)
{
remainder=n%10;
s=s+remainder*remainder*remainder;
n=n/10;
}
if(n1==s)
{
printf("Amstrong number");
}
else
{
printf("Not");
}
}
