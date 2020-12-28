  
#include <stdio.h>
int fac_bit_count(int n); 
int main()
{
	int ws,n;
	scanf("%d",&n);
	ws=fac_bit_count(n);
	printf("Î»ÊıÎª%d",ws);
	return 0;
}
int fac_bit_count(int n)
{
	int t,k=1,ws=0;
	for(t=1;t<=n;t++)
	k=k*t;
	while(k>0)
	{
		k/=10;
		ws++;
	}
	return ws;
}