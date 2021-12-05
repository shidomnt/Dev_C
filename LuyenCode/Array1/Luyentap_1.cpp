/*
Cho mảng 1 chiều gồm n phần tử nguyên, 
nhập vào một phần tử x, 
1.xóa phần tử thứ x trong mảng, 
2.sau đó thay thế nhưng số 8 trong mảng bằng x, 
3.tiếp theo chèn thêm số 9 vào vị trí x+2. 
Mỗi thao tác thực hiên xong in kết quả ra màn hình.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void adelete(int *a,int *n,int pos){
    for(int i=pos;i<(*n);i++){
        a[i]=a[i+1];   
    }
    (*n)--;
}
void ainsert(int *a,int *n,int pos, int val){
    for(int i=(*n);i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=val;
    (*n)++;
}
void areplace(int *a,int n,int val,int val_des){
    for(int i=0;i<n;i++){
        if(a[i]==val_des)
        a[i]=val;
    }
}
void nhapa(int *a,int n){
    for(int i=0;i<n;i++){
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",a+i);
    }
}
void xuata(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main() {
    int n;
    printf("\nNhap so luong phan tu: ");
    scanf("%d",&n);
    printf("\nNhap so x= ");
    int x;
    scanf("%d",&x);
    int* a = (int*) malloc(n*sizeof(int));
    nhapa(a,n);
    printf("\nBat dau: ");
    xuata(a,n);
    printf("\nXoa phan tu thu x = %d trong mang: ", x);
    adelete(a,&n,x-1);
    xuata(a,n);
    printf("\nThay the nhung so 8 trong mang bang phan tu x = %d: ",x);
    areplace(a,n,x,8);
    xuata(a,n);
    printf("\nChen them so 9 vao vi tri thu x + 2 = %d : ",x+2);
    ainsert(a,&n,x+2-1,9);
    xuata(a,n);
    return 0;
}