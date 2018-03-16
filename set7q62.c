#include<stdio.h>
void main()
{
    int n,a,count=0,flag=0;
    printf("\n Enter the value");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        count++;
        if(a==1||a==0)
        flag++;
        n=n/10;
    }
    if(count==flag)
    printf("\n yes");
    else
    printf("\n No");
    return 0;
}
