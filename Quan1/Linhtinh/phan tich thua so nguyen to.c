#include<stdio.h>
#include<math.h>
#include<windows.h>

int fact(int n){
	int i, dem=0;
	for(i=1; i<n; i++){
		if(n%i==0){
			dem++;
		}
	}
	if(dem!=1){
		n=0;
	}
	return n;
}

void nums(int A, int n){
	int i;
	while(A%n==0){
		printf(" %d *", n);
		A= A/n;
	}
}

int main(){
	int A;
	printf("Nhap so nguyen duong ban muon phan tich: ");
	scanf("%d", &A);
	while( A < 1){
		printf("\nHay nhap so nguyen duong: ");
		scanf("%d", &A);
	}
	printf("\n%d= ", A);
	int n;
	for(n=2;n<A;n++){
		fact(n);
		if(n!=0){
			nums(A,n);
		}
	}
	
	return 0;
}

