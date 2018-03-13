#include<stdio.h>

void main()
{
int g,n,s;
printf("Enter the value");
scanf("%d",&g);
scanf("%d",&s);
g=g^s;
s=s^g;
g=g^s;
printf("%d\n%d\n",g,s);
}
