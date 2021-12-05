//Tim uoc cua so n
#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Nhap so n= ");
	scanf("%d",&n);
	int i;
	for(i=n;i>0;i--)
	{
		if(n%i==0)
		{
			s+=i;
		}
	}
	if(2*n==s)
	{
		printf("So %d la so hoan hao!",n);
	}
	else
	{
		printf("So %d khong phai so hoan hao",n);
	}
	return 0;
}
