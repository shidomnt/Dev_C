#include<stdio.h>
float tong(int a[],int n){
	float s=0;
	for(int i=0;i<n;i++){
		s+=a[i];
	}
	return s;
}
int main(){
	int a[12],thang=1;
	for(int i=0;i<12;i++,thang++){
		printf("Nhap luong mua thang %d: ",thang);
		scanf("%d",&a[i]);
	}
	float trungbinh=tong(a,12)/12;
	printf("Luong mua trung binh= %f\n",trungbinh);
	for(int i=0,thang=1;i<12;i++,thang++){
		if(a[i]>trungbinh) printf("Thang %d mua nhieu\n",thang);
	}
	return 0;
}
