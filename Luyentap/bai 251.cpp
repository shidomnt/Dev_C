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
	printf("Nhap lien tuc cac so muon kiem tra, muon dung nhap so 0 \n");
	int a=1,s1=0,s2=0;
	do{
		printf("Nhap so: ");
		scanf("%d",&a);
		if(a==0) break;
		if(nguyento(a)!=0){
			printf("%d la so nguyen to\n",a);
			s1+=1;
		}
		else printf("%d khong phai so nguyen to\n",a);
		if(hoanhao(a)!=0){
			printf("%d la so hoan hao\n",a);
			s2+=1;
		}
		else printf("%d khong phai so hoan hao\n",a);
	}
	while(a!=0);
	printf("Trong day so vua nhap co %d so nguyen to va %d so hoan hao",s1,s2);
	getch();
}
