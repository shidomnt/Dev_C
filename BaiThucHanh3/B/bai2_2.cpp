#include<math.h>
#include<conio.h>
#include<stdio.h>
void nhapmang(float a[],int n){                       //Ham nhap mang
    for(int i=0;i<n;i++){
        printf("Nhap so thu %d: ",i+1);
        scanf("%f",&a[i]);
    }
}
float trungbinh(float a[],int n){                     //Ham tinh trung binh cac phan tu cua mang
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
    int n;
    printf("Nhap n(4<= n <= 26): ");
    scanf("%d",&n);
    while(n<4||n>26){
        printf("Nhap lai! Luu y dieu kien cua n :");
        scanf("%d",&n);
    }
    float X[n];
    nhapmang(X,n);
    float TB=trungbinh(X,n);
    printf("SO PHAN TU > %6.2f LA: %2d",TB,soptlon(X,n,TB));
    getch();
}