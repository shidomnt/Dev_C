//Tim so lon nhat
#include<stdio.h>
int max2(int a, int b){
	if(a-b<0){
		return b;
	}
	else {
	return a;
	}
}
int main(){
	int a,b,c,d;
	printf("Nhap lan luot 4 so nguyen: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(max2(a,b)-max2(c,d)<0){
		printf("so lon nhat= %d",max2(c,d));
	}
	else {
	printf("so lon nhat= %d",max2(a,b));
}
}
