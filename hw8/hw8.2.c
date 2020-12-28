#include <stdio.h>
int is_pow2(int n)
{
	if ((n&(n - 1)) == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	if (is_pow2(n))
		printf("这个数是2次方幂\n");
	else
		printf("这个数不是2次方幂\n");
	return 0;
}