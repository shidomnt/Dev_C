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
        printf("%6.2f",a[i]);
        if((i+1)%8==0) printf("\n");
    }
}
float trungbinh(float a[],int n){                       //Ham tinh trung binh cac phan tu cua mang
    float s=0;
    for(int i=0;i<n;i++)
    s+=a[i];
    return s/n;
}
int soptlon(float a[],int n,float TB){                //Ham dem so luong phan tu co gia tri lon hon trung binh
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]>TB) dem++;
    }
    return dem;
}
int main(){
    int N;
    printf("Nhap so luong phan tu(6<=N<=30): ");
    scanf("%d",&N);
    while(N<6||N>30){
        printf("Sai! Nhap lai so luong phan tu: ");
        scanf("%d",&N);
    }
    float G[N];
    nhapmang(G,N);
    xuatmang(G,N);
    printf("\nSO PHAN TU G CO GIA TRI > %7.2f LA %3d",trungbinh(G,N),soptlon(G,N,trungbinh(G,N)));
    getch();
}