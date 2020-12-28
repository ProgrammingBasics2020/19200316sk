#include <stdio.h>
int r[6][6];
void mult(int a[6][6], int b[6][6])
{ }
 int main()
{
	int i, j;
	int num1[6][6], num2[6][6];
	printf("请输入第一个矩阵的值:\n");
	for (i = 1; i <= 6; i++)
		for (j = 1; j <= 6; j++)
			scanf("%d", &num1[i][j]);
	printf("请输入第二个矩阵的值:\n" );
	for (i = 1; i <= 6; i++)
		for (j = 1; j <= 6; j++)
			scanf("%d", &num2[i][j]);
	mult(num1, num2);
	printf("\n两个矩阵相乘后的结果为：\n");
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= 6; j++)
			printf("% 4d", r[i][j]);
		printf("\n");
	}
return 0;
 }