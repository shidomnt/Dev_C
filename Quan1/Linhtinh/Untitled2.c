#include<stdio.h>
#include<math.h>
#include<string.h>

void check(char arr[], char a[], int j){
    int i,n=0;
    int ln= strlen(arr);
    for(i=0; i< ln; i++){
    	if(arr[i] == a[j]){
    		n++;
		}
	}
	printf("\n%c xuat hien %d lan", a[j], n);
}

int main(){
    //Nhap chuoi
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    int T,i;
    int ln= strlen(str);
	printf("\nNhap T: ");
    scanf("%d", &T);
    char a[T][2];
    printf("Nhap cac chu cai: ");
	for(i=0;i<T;i++)
        scanf("%s",&a[i]);

    for(i=0; i<ln; i++){
    	if(str[i] <= 90 && str[i] >= 65){
    		str[i]= str[i] + 32;
		}
	}
   
	for(i=0; i<T; i++){
    	check(str, a[i], i);
	}
    
    return 0;
}
