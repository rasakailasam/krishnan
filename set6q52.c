#include<stdio.h>
void main()
{
    int i,num=0;
    printf("Enter the I value");
    scanf("%d",&i);
    while(num!=0)
    {
        num=i+10;
        printf("%d",num);
        }
switch(i)
{
    case 1:
    printf("ONE");
    break;
    case 2:
    printf("TWO");
    break;
    case 3:
    printf("THREE");
    break;
}
}
