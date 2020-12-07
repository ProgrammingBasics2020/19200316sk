#include<stdio.h>
#define PI 3.14
int main()
{
	double r,s,c;
	scanf("%lf",&r);
	s=PI*r*r;
	c=2*PI*r;
	printf("s=%lf\n",s);
	printf("c=%lf\n",c);
	return 0;
}
