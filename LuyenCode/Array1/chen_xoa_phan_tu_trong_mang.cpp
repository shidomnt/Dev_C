#include<stdio.h>
#include<math.h>
#include<stdbool.h>
const int max=8;
void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
    printf("Nhap phan tu thu %d: ",i);
    scanf("%d",&a[i]);
    }
}
void chenthem(int val,int vitri,int a[],int &n){
    if(n>=max){
        printf("Mang da day khong the chen them!\n");
        return;
    }
    if(vitri<0) vitri=0; // chen vao dau mang
    else if(vitri>n-1) vitri=n; //chen vao cuoi mang
    for(int i=n;i>vitri;i--){
        a[i]=a[i-1];
    }
    a[vitri] = val;
    n++;
}
void xoa(int vitri,int a[],int &n){
    if(vitri<0) vitri=0; //xoa o dau mang
    if(vitri>n-1) vitri=n-1; //xoa o cuoi mang
    for(int i=vitri;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
}
void xuatmang(int a[],int n){
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
int main(){
    int n;
    printf("Nhap so luong phan tu(<=%d): ",max);
    scanf("%d",&n);
    int a[max];
    nhapmang(a,n);
    xuatmang(a,n);
    int val,vitri;
    printf("\nChen them so: "); //chen
    scanf("%d",&val);
    printf("Vao vi tri: ");
    scanf("%d",&vitri);
    chenthem(val,vitri,a,n);
    xuatmang(a,n);
    printf("\nNhap vi tri muon xoa: "); //xoa
    scanf("%d",&vitri);
    xoa(vitri,a,n);
    xuatmang(a,n);
    return 0;
}