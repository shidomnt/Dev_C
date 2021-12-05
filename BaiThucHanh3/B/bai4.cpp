#include<conio.h>
#include<stdio.h>
void nhapmang(float a[],int n){                       //Ham nhap mang
    for(int i=0;i<n;i++){
        printf("Nhap so thu %d: ",i+1);
        scanf("%f",&a[i]);
    }
}
void xuatmang(float a[],int n){                       //Ham xuat mang
    for(int i=0;i<n;i++){
        printf("%5.2f",a[i]);
        if((i+1)%6==0) printf("\n");
    }
}
float tong(float a[],int n){
    float s=0;
    for(int i=0;i<n;i++){
        if(a[i]<=6&&a[i]>-3) s+=a[i];
    }
    return s;
}
int main(){
    int N;
    printf("Nhap so luong phan tu(4<=N<30): ");
    scanf("%d",&N);
    while(N<4||N>=30){
        printf("Sai! Nhap lai so luong phan tu: ");
        scanf("%d",&N);
    }
    float T[N];
    nhapmang(T,N);
    xuatmang(T,N);
    printf("\nTONG CAC PHAN TU CO GIA TRI -3<T[i]<=6 LA: %6.2f",tong(T,N));
    getch();
}