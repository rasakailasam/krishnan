#include<stdio.h>
void main()
{
int A[30];
int i,n,k,sum=0;
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter k value to sum");
scanf("%d",&k);
printf("Enter element of array",n);
for(i=0;i<n;i++)
{
scanf("%d",A[i]);
}
for(i=0;i<k;i++)
{
sum=sum+A[i];
}
printf("sum of k values are %",sum);
}
