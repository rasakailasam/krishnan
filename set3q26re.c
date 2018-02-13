#include<stdio.h>
int main()
{
int b,re=0;
printf("enter the number:");
scanf("%d",&b);
while(b!=0)
{
re=re*10;
re=re+b%10;
b=b/10;
}
printf("the reverse of the number",re);
return 0;
}
