#include<stdio.h>
#include<math.h>

void check(char arr[], char a[], int j){
    int i,n=0;
    int ln= strlen(arr);
    for(i=0; i< ln; i++){
    	if((int)arr[i] == a[j]){
    		n++;
		}
	}
	printf("\n%c xuat hien %d lan", (char)a, n);
}
int main(){
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    int T,i;
    int ln= strlen(str);
	printf("\nNhap T: ");
    scanf("%d", &T);
    char a[T];
    printf("Nhap cac chu cai: ");
    for(i=0; i<ln; i++){
    	if((int)str[i] <= 90){
    		(int)str[i]= (int)str[i] + 32;
		}
	}
    for(i=0; i<T; i++){
    	scanf("%c", &a[i]);
	}
	for(i=0; i<T; i++){
    	check(str, a[i], i);
	}
    
    return 0;
}