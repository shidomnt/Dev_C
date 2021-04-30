#include<stdio.h>
int main()
{
	int i,n,a;
	printf("Nhap N= ");
	scanf("%d",&n);
	a=n;
	for(i=2;i<=n;i++)
	{
		while((a%i)==0)
		{	
			a/=i;
			printf("%d\n",i);
		}
	}
}

