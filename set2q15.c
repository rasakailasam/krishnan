#include<stdio.h>
#include<conio.h>
void main()
{
 long int a,b,c;
printf("enter the interval");
scanf("%ld%ld",&a,&b);
printf("even numbers between the interval :");
for(c=a+1;c<b;c++)
{
if((c%2)==0)
{
printf("%d\n",c);
}
}
getch();
}
