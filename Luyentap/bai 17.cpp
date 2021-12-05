//Viet chuong trinh tinh n!
#include<stdio.h>
int main()
{
	int n,i;
	printf("Nhap n= ");
	scanf("%d",&n);
	int giaithua=1;
	for(i=2;i<=n;i++)
	{
		giaithua*=i;
	}
	printf("%d!= %d",n,giaithua);
	return 0;
}
