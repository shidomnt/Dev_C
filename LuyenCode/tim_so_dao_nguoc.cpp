#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	while(a%10==0){
		a/=10;
	}
	while(true){
		if(a>10){
			printf("%d",a%10);
			a/=10;
		}
		else{
			printf("%d",a);
			break;
		}
	}
}
