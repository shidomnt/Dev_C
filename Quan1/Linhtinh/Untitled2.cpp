#include<stdio.h>
#include<math.h>
#include<string.h>

void check(char arr[], char a[]){
    int ln=strlen(arr);
    int n=0;
    for(int i=0;i<ln;i++){
        if(a[0]==arr[i])
        n++;
    }
    printf("%c co %d tu\n",a[0],n);
}

int main(){
    //Nhap chuoi
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    int T,i;
    int ln= strlen(str);
    //NHap so lan test
	printf("\nNhap T: ");
    scanf("%d", &T);
    char a[T][2];
    //Nhap cac ki tu muon tim
    printf("Nhap cac chu cai: ");
	for(i=0;i<T;i++)
        scanf("%s",&a[i]);

    for(i=0; i<ln; i++){
    	if(str[i] <= 90 && str[i] >= 65){
    		str[i]= str[i] + 32;
		}
	}
   
	for(int i=0; i<T; i++){
    	check(str, a[i]);
	}
    
    return 0;
}
