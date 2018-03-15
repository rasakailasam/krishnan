
#include<stdio.h>
int main(void)
{
 int num1,num2,product;
 printf("Get the two numbers:");
 scanf("%d%d",&num1,&num2);
 product=num1*num2;
 if(product%2==0)
 {
  printf("This is even number=%d",product);
  }
  return 0;
  }
