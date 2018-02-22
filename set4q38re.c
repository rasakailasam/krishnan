#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the two elements:");
  scanf("%d\t%d",&x,&y);
  x^=y;
  y^=x;
  x^=y;
  printf("After swapping %d %d",x,y);
  return 0;
}
