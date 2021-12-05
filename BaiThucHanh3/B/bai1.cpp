#include<conio.h>
#include<stdio.h>
void nhapmang(int a[],int n){                       //Ham nhap mang
    for(int i=0;i<n;i++){
        printf("Nhap so thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[],int n){                       //Ham xuat mang
    for(int i=0;i<n;i++){
        printf("%4d",a[i]);
        if((i+1)%6==0) printf("\n");
    }
}
float trungbinh(int a[],int n){                     //Ham tinh trung binh cac phan tu cua mang
    float s=0;
    for(int i=0;i<n;i++)
    s+=a[i];
    return s/n;
}
int soptlon(int a[],int n,float TB){                //Ham dem so luong phan tu co gia tri lon hon trung binh
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]>TB) dem++;
    }
    return dem;
}
void sapxepchen(int a[],int n){                     //Thuat toan sap xep chen
    for(int i=0;i<n;i++){
        int j=i-1;
        int temp=a[i];
        while(j>=0&&temp>a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
void sapxepchon(int a[], int n){                    //Thuat toan sap xep chon
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}
int main(){
    int n;
    printf("Nhap so luong phan tu(3<=n<=30): ");
    scanf("%d",&n);
    while(n<3||n>30){
        printf("Sai! Nhap lai so luong phan tu: ");
        scanf("%d",&n);
    }
    int A[n];
    nhapmang(A,n);
    xuatmang(A,n);
    float TB=trungbinh(A,n);
    printf("\nGIA TRI TRUNG BINH CUA MANG A LA: %6.2f\n",TB);
    printf("\nSO PHAN TU A CO GIA TRI > %6.2f LA %3d\n",TB,soptlon(A,n,TB));
    sapxepchen(A,n);
    xuatmang(A,n);
    getch();
}