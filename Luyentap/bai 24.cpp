#include<stdio.h>
#include<conio.h>
int nguyento(int a){
	int s=0;
	for(int i=1;i<=a;i++){
		if(a%i!=0) continue;
		s+=1;
	}
	if(s==2) return a;
	else return 0;
}
int hoanhao(int a){
	int s=0;
	for(int i=1;i<a;i++){
		if(a%i!=0) continue;
		s+=i;
	}
	if(s==a) return a;
	else return 0;
}
int main(){
	int a;
	printf("Nhap vao so a= ");
	scanf("%d",&a);
	if(nguyento(a)!=0) printf("%d la so nguyen to!\n",a);
	else printf("%d khong phai so nguyen to!\n",a);
	if(hoanhao(a)!=0) printf("%d la so hoan hao!\n",a);
	else printf("%d khong phai so hoan hao!\n",a);
	getch();
}
