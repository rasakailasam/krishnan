#include<stdio.h>
int main()
{
	int i,a,flag=0;
	printf("enter the num");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if((a%i)==0)
		{
			flag++;
			break;
		}}
		if(flag!=0)
		printf("\ncomposite number");
		else 
		printf("\n not a composite number");
	
	return 0;
}
