#include <stdio.h>
int is_pow2(int n);
int ejz(int n);

int main()
{
	int n;
	printf("������һ������"); 
	scanf("%d",&n);
	if(is_pow2(n)==0) printf("������2���ݴη�");
	else printf("��������2���ݴη�"); 
	return 0;
}

int is_pow2(int n)
{
	if(n==0) return -1;
	else if(!(n & (n-1))) return 0;
	else return -1;
}