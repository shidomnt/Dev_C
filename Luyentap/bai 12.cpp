//Tim uoc cua so n
#include<stdio.h>
int main()
{
	int n;
	printf("Nhap so n= ");
	scanf("%d",&n);
	int i;
	for(i=n;i>0;i--)
	{
		if(n%i!=0) continue;
		printf("%d\n",i);
	}
	return 0;
}
