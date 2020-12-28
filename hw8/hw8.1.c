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
	printf("%d用二进制表示的数中1的个数为%d", n, count1_in_bin(n));
	return 0;
}