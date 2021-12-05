#include<stdio.h>
#define max 10

void nhap(int arr[]){
	int i;
	for(i=0; i<max; i++){
		scanf("%d", &arr[i]);
	}
}

void hienThi(int arr[]){
	int i;
	for(i=0; i<max; i++){
		printf("%4d", arr[i]);
	}
}

void sapXep(int arr[]){
	int min, i, j;
	for(i=0; i<max; i++){
		min=i;
		for(j=i+1; j<max; j++){
			if(arr[j] < arr[min]){
				int swap;
				swap= arr[j];
				arr[j]= arr[min];
				arr[min]= swap;
			}
		}
	}
}

int main(){
	int arr[max];
	printf("Nhap cac phan tu cua mang: ");
	nhap(arr);
	sapXep(arr);
	hienThi(arr);
	
	return 0;
}
