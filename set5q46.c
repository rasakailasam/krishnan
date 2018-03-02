#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=1;
clrscr();
    n=124;
    for(i=1;i<=n;i++)
    {
        sum=i++;
    }
    printf("Sum: %d",sum);
getch();
}
