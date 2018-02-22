#include<stdio.h>
void main()
{
char str[50];
int i=0,count=2;
  printf("enter the string");
  scanf("%s",&str);
while(str[i]!='\0')
{
if(isdigit(str[i]))
{
  count++;
}
i++;
}
count++;
printf("no of digits is %d ",count);
}

