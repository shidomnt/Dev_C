/*Đề bài tập mảng 1 chiều như sau:

Nhập từ bàn phím mảng số nguyên gồm n phần tử.

1.Tính trung bình cộng các số lẻ ở vị trí chẵn
2.Tìm số lớn nhất trong mảng vừa nhập
3.Tìm vị trí các số nhỏ nhất trong mảng
4.Đếm các số chính phương có trong mảng
5.Hiện thị các số nguyên tố có trong mảng lên màn hình
6.Thay thế các phần tử âm có trong mảng bằng giá trị 0
7.Xóa các phần tử âm có trong mảng
8.Sắp xếp mảng đã nhập theo thứ tự tăng dần
*/
/*
Muốn kiểm tra đáp án câu hỏi nào thì bỏ chú thích chứa đáp án
*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<conio.h>
void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("Nhap so thu %d: ",i);
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[],int n){
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
float trungbinhcong(int a[],int n){
    float dem=0,s=0;
    for(int i=0;i<n;i+=2){
        if(a[i]%2!=0){
            s+=a[i];
            dem++;
        }
    }
    return s/dem;
}
void sapxep(int a[],int n){
    for(int i=0;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0&&temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int solonnhat(int a[],int n){
    sapxep(a,n);
    return a[n-1];
}
int sonhonhat(int a[],int n){
    sapxep(a,n);
    return a[0];
}
void vitrisonhonhat(int a[],int n){
    printf("So nho nhat nam o vi tri: ");
    for(int i=0;i<n;i++){
        if(sonhonhat(a,n)==a[i]) printf("%d ",i);
    }
}
bool sochinhphuong(int a){
    if(int(sqrt(a))*int(sqrt(a))==a) return true;
    else return false;
}
int solgsochinhphuong(int a[],int n){
    int dem=0;
    for(int i=0;i<n;i++){
        if(sochinhphuong(a[i])) dem++;
    }
    return dem;
}
bool songuyento(int a){
    if(a<2) return false;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}
void hienthisonguyento(int a[],int n){
    bool check=true;
    printf("Cac so nguyen to co trong mang la: ");
    for(int i=0;i<n;i++){
        if(songuyento(a[i])) printf("%d ",a[i]);
        check=false;
    }
    if(check) printf("Trong mang khong co so nguyen to!");
}
void thaythegiatriam(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]<0) a[i]=0;
    }
}
void xoaphantu(int vitri,int a[],int &n){
    for(int i=vitri;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
}
void xoaphantuam(int a[],int &n){
    bool check=true;
    while(check){
        for(int i=0;i<n;i++){
            if(a[i]<0){
                xoaphantu(i,a,n);
                break;
            }
            check=false;
        }
    }
}
int main(){
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    while(n<1){
        printf("So phan tu phai lon hon 1!\nNhap lai: ");
        scanf("%d",&n);
    }
    int a[n];
    nhapmang(a,n);
    //printf("Trung Binh Cong Cac So le o vi tri chan la: %f",trungbinhcong(a,n));      //1

    //printf("So lon nhat la: %d",solonnhat(a,n));                                      //2

    //vitrisonhonhat(a,n);                                                              //3

    //printf("So luong so chinh phuong co trong mang la: %d",solgsochinhphuong(a,n));   //4

    //hienthisonguyento(a,n);                                                           //5

    /*                                                                                  //6
    thaythegiatriam(a,n);
    printf("Mang sau khi thay the: ");
    xuatmang(a,n);
    */                                                                                  //6

    /*                                                                                  //7
    xoaphantuam(a,n);
    printf("Mang sau khi xoa cac phan tu am: ");
    xuatmang(a,n);
    */                                                                                  //7

    /*                                                                                  //8
    sapxep(a,n);
    xuatmang(a,n);
    */                                                                                  //8
    getch();
}