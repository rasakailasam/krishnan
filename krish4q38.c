#include<stdio.h>
int main(void)
{
  int a,b;
  printf("Enter two elements:");
  scanf("%d\t%d",&a,&b);
  a^=b;
  b^=a;
  a^=b;
  printf("After %d %d",a,b);
  return 0;
}
