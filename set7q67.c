#include<stdio.h>
int main(void)
{
int a;
    printf("\n Enter the number");
    scanf("%d",&a);
    while(a%10!=0)
    {
        a++;
    }
printf("\n the nearest greater multiple of 10 is %d",a);
}
