#include <stdio.h>
int is_int_pal(int n)
{
	int  i,k,a=0,m,b,sum=0,flag=0;
	int s[50];
	int s2[50];
	k=n;
	m=n;
	while(k>0)
	{
		k=k/10;
		a++;
	}
	while(m>0)
	{
		b=m%10;
		m=m/10;
		sum=sum*10+b;
	}
	while(sum>0)
	{
		for(i=0;i<a;i++)
		{
			s2[i]=sum%10;
			sum=sum/10;
		}
	}
	while(n>0)
	{
		for(i=0;i<a;i++)
		{
			s[i]=n%10;
			n=n/10;
		}
	}
	for(i=0;i<a;i++)
	{
		if(s[i]!=s2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		return 0;
	else
		return 1;
}
int main()
{
	int n,result;
	scanf("%d",&n);
	result=is_int_pal(n);
	printf("%d\n",result);
	return 0;
}