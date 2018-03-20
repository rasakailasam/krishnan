#include<stdio.h>
void main()
{
int n,a,i;
printf("\n enter  the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
a=(pow(2,i));
if(a>n)
{
printf("\n %d is the nearest power of 2",a);
break;
}
}
return 0;
}
