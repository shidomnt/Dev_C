#include<stdio.h>
#include<math.h>
#define length 10


int main(){
	int arr[length];
	printf("Nhap mang: ");
	int i, P=0, a=0;
	float S;
	for(i=0;i<length;i++){
		scanf("%d", &arr[i]);
		if(arr[i] % 3 == 0){
			P= P+ arr[i];
			a++;
		}
	}
	S= P/a;
	printf("Trung binh cong= %0.2f", S);
	return 0;
}
