
#include <stdio.h>

int main(void) 
{
        int n,rem,rev,dig;
        scanf("%d",&n);
        while(n!=0)
        { 
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
     while(rev!=0)
    {
       dig=rev%10;
        rev=rev/10;
        printf("%d ",dig);
    }
         return 0;
}
