#include <stdio.h>
void main()
{
    int a,b,c;
    printf("\n enter the 2 nums");
    scanf("%d %d",&a,&b);
    c=a-b;
    if(c%2==0)
    printf("\n even");
    else
    printf("\n odd");
	return 0;
}
