#include<stdio.h>
#include<math.h>
#include<string.h>

void chuyenNhiPhanDao(int *a, long i){
    while (i != 0)
    {
        *a=i%2;
        a++;
        i/=2;
    } a++;
}

void demSoDoiXung(int n){
    long i= pow(10,n-1), LENGTH= pow(10,n)-1;
    for(i;i< 1005;i++){
        int arr[32], *a= arr;
        chuyenNhiPhanDao(a,i);
        int j=0;
        for(j;j<sizeof(arr);j++){
            printf("%d", arr[j]);
        } printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    demSoDoiXung(n);
    return 0;
}