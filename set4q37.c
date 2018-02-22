#include <stdio.h>
 
int main()
{
   int a,b, temp;
 
  
   scanf("%d%d", &a, &b);
 
   printf("Before Swapping\na = %d\nb = %d\n",a,b);
 
   temp = a;
   a    = b;
   b    = temp;
 
   printf("After Swapping\nx = %d\ny = %d\n",a,b);
 
   return 0;
}
