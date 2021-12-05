#include<math.h>
#include<conio.h>
#include<stdio.h>
void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("Nhap so thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
}
int soptchiahetcho5(int a[],int n){
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]%5==0) dem++;
    }
    return dem;
}
int main(){
    int n;
    printf("Nhap n(4<= n <= 38)= ");
    scanf("%d",&n);
    while(n<4||n>38){
        printf("Nhap lai! Luu y dieu kien cua n :");
        scanf("%d",&n);
    }
    int A[n];
    nhapmang(A,n);
    printf("SO PHAN TU CHIA HET CHO 5 LA: %3d",soptchiahetcho5(A,n));
    getch();
}