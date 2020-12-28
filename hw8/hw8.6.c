#include <stdio.h>
int count1_in_bin(int n);

int main()
{
	int n;
	printf("请输入一个数：");
	scanf("%d",&n);
	printf("该数的二进制有%d个1",count1_in_bin(n));
	return 0;
}

int count1_in_bin(int n)
{
	int a[100],i,j,cnt=0;
	for(i=0;n>=2;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	a[i]=n;
	for(j=0;j<=i;j++)
	{
		if(a[j]==1) cnt++;
	}
	return cnt;
}