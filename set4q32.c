#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[60];
	int i,count=1;
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i] == ' ')
		count++;
		
		
	}
	printf("%d",count);
	return 0;
}
