#include<stdio.h>
#include<conio.h>
void main()
{
int b,a[10],i,d;
printf("Enter the size of array:\n");
scanf("%d",&b);
printf("Enter the elements of array:\n");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
d=a[0];
for(i=0;i<b;i++)
{
if(a[i]<d)
{
d=a[i];
}}
printf("Minimum Value is %d",d);
getch();
}
