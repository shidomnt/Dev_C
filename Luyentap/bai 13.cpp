//Kiem tra so n co phai so nguyen to hay khong
#include<stdio.h>
int main()
{
	int n,d=0;
	printf("Nhap so n= ");
	scanf("%d",&n);
	int i;
	for(i=n;i>0;i--)
	{
		if(n%i==0)
		{
			d+=1;
		}
	}
	if(d==2)
	{
		printf("So %d la so nguyen to!",n);
	}
	else
	{
		printf("So %d khong phai so nguyen to!",n);
	}
	return 0;
}
