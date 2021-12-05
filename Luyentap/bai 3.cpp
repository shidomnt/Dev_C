#include<stdio.h>
int main()
{
	int a,b;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	printf("a+b=%d\na-b=%d\na*b=%d\na/b=%5.2f\n",a+b,a-b,a*b,(float)a/b);
	return 0;
}
