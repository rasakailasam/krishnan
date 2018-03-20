#include<stdio.h>
#include<string.h>
int main()
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
printf("\n It is vowel");
}
else
{
printf("\n Not a vowel");
}
return 0;
}
