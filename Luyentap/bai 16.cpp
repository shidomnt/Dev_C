//Tong binh phuong cac so le tu 1 den n
#include<stdio.h>
int main()
{
	int n,i;
	float s=0;
	printf("Nhap n= ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0) continue;
		s+=i*i;
	}
	printf("S= %.2f",s);
	return 0;
}
