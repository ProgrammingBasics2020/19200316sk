#include<stdio.h>
int count1_in_bin(int n)
{
	int count = 0;
	while (n) {
		count++;
		n &= (n - 1);
	}
	return count;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d�ö����Ʊ�ʾ������1�ĸ���Ϊ%d", n, count1_in_bin(n));
	return 0;
}