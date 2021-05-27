#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n: "); scanf("%d", &n);
	int i;
	printf("=> n= ");
	for(i=2; i<= n; i++){
		int mu=0;
		while (n % i == 0)
		{
			n/=i;
			mu++;
		}
	
	if( mu>0 )
	{
		printf("%d^%d", i, mu);	
		if (n>1)
		{
			printf("x");
		}
		
	}
	}
	return 0;
}