//Ve hinh chu nhat
#include<stdio.h>
int main()
{
	int a, b;
	int i,j;
	printf("Nhap a= ");
	scanf("%d",&a);
	printf("Nhap b= ");
	scanf("%d",&b);
	for(;a<=0||b<=0;)
	{
		if(a<=0)
		{
			printf("Nhap lai a= ");
			scanf("%d",&a);
		}
		else if(b<=0)
		{
			printf("Nhap lai b= ");
			scanf("%d",&b);
		}
	}
	for(j=1;j<=b;j++)
	{
	for(i=1;i<=a;i++)
	{
		printf("*");
	}
		printf("\n");		
	}
	}
	
