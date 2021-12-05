#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		printf("Nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	int min=a[0], max=a[0];
	for(i=0;i<n;i++){
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	printf("SLN la %d\nSNN la %d\n",max,min);
	return 0;
}
