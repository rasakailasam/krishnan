#include<stdio.h.
#include<string.h>
void main()
{
char a[10],b[10];
int n;
printf("\nEnter the string");
scanf("%s",&a);
strcpy(b,a);
strrev(a);
n=strcmp(a,b);
if(n==0)
{
printf("\n palindrome");
}
else
{
printf("\n Not a palindrome");
}
return 0;
}
