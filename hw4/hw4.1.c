#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,m,n;
  int a[16]={0};
  scanf("%d",&n);
  printf("�˽�������: %o\n",n);
  printf("ʮ����������: %X\n",n);
  for(m=0;m<15;m++)
  {
	  i=n%2;
	  j=n/2;
	  n=j;
	  a[m]=i;
  }
  for(m=15;m>=0;m--)
  {
	  printf("%d",a[m]);
	  if(m%4==0)
		  printf(" ");
  }
  printf("\n");
}
  
