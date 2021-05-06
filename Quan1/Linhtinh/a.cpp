#include<stdio.h>
#include<math.h>
#include<string.h>

void chuyenHeSo(int arr[], int a){
    int i,j;
    int L=11;
    for(j=0;j<L;j++){
        arr[j]=0;
    }
    for(i=L-1;i>=0;i--){  
        arr[i]= a%2;
        a/=2;
    }
}

int back(int arr[]){
    int i,s;
    int L=11;
    for(i=0;i<L;i++){
        s+= (arr[L-i-1])*pow(2,i);
    }
    return s;
}

int main(){
    int a=1000, L=11, s;
    int arr[L];
    chuyenHeSo(arr,a);
    int i;
    for(i=0; i<L;i++){
        printf("%d", arr[i]);
    }
    s= back(arr);
    printf("\n%d",s);
    return 0;
}