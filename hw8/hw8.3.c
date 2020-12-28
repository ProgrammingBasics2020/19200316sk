  
#include <stdio.h>
#include <string.h>
int main()
{
	char c[20];
	char temp;
	int i=0;
	int m;
	while(c[i]!='\0')
	{
		scanf("%c",c[i]);
		i++;
	}
	m=i;
	for(i=0;i<=m/2;i++)
	{
		temp=c[i];
		c[i]=c[m-i];
		c[m-i]=temp;
	}
	puts(c);

	return 0;
}