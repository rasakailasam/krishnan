#include <stdio.h>
 
int main() 
{
	int a;
	printf("Enter A value");
	scanf("%d",&a);
	if(a%2==0)
	printf("%d",a);
	else
	printf("%d",--a);
 
	return 0;
}
