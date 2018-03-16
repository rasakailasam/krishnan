#include<stdio.h>
void main()
{
char a[30];
int i,b=1;
printf("Enter the string");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
b++;
}
}
printf("%d",b);
getch();
}
