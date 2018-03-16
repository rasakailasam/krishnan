#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the 2 numbers");
scanf("%d%d",&a,&b);
c=a+b;
if(c%2==0)
printf("\n Even");
else
printf("\n Odd");
return 0;
}
