#include<stdio.h>
int main()
{
	int x,y,temp;
	scanf("%d%d",&x,&y);
	temp=x^y;
	x=temp^x;
	y=temp^y;
	printf("x=%d,y=%d\n",x,y);
}
