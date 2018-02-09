
#include<stdio.h>
int main()
{
int a,re=0;
printf("enter the number:");
scanf("%d",&a);
while(a!=0)
{
re=re*10;
re=re+a%10;
a=a/10;
}
printf("the reverse of the number",re);
return 0;
}
