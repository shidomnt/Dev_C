//Tong S = 1 + 1/2 +...+ 1/n
#include<stdio.h>
int main()
{
	int n,i;
	float s=0;
	printf("Nhap n= ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s+=(float)1/i;
	}
	printf("S= %.2f",s);
	return 0;
}
