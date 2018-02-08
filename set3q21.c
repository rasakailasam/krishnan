#include<stdio.h>
#include<conio.h>
void main()
{
int b,a[10],i,c;
printf("Enter the size of array:\n");
scanf("%d",&b);
printf("Enter the elements of array:\n");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
c=a[0];
for(i=0;i<b;i++)
{
if(a[i]>c)
{
c=a[i];
}}
printf("Maximum Value is %d",c);
getch();
}
