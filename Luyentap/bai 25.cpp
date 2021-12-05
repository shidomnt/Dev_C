#include<stdio.h>
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
	int a,b,s1=0,s2=0;
	printf("Ban muon nhap bao nhieu so?\t");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&b);
		if(nguyento(b)!=0) {
			printf("%d la so nguyen to.\n",b);
			s1+=1;
		}
		else printf("%d khong phai so nguyen to.\n",b);
		if(hoanhao(b)!=0){
			printf("%d la so hoan hao.\n\n",b);
			s2+=1;
		}
		else printf("%d khong phai so hoan hao.\n\n",b);
	}
	printf("Trong %d so vua nhap co %d so nguyen to\n",a,s1);
	printf("Trong %d so vua nhap co %d so hoan hao\n",a,s2);
	return 0;
}
