#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a;
	for(int i=n,a=n-1;i>=1,a>=0;i--,a--){
		for(int j=1;j<=n-i;j++)
		printf(" ");
		for(int k=1;k<=i+a;k++)
		printf("*");
		printf("\n");
	}
	getch();
}
