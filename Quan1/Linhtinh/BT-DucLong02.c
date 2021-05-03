#include<stdio.h>
#include<math.h>
#define max 20

int main(){
	char arr[max];
	int i;
	int na=0, pa=0;
	for(i=0;i<max;i++){
		scanf("%c", &arr[i]);
		if(arr[i] == 'u' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'a' || arr[i] == 'i' ){
			na++;
		}
		else{
			pa++;
		}
	}
	printf("\nDay ky tu la: ");
	for(i=0;i<max;i++){
		printf("%c", arr[i]);
	}
	printf("\nSo nguyen am la: %d", na);
	printf("\nSo phu am la: %d", pa);
	return 0;
}
