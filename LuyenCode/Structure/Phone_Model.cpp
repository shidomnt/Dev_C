/*
Viết CT nhập vào 1 danh sách các mẫu điện thoại, 
mỗi mẫu bao gồm : 
*tên hãng (VD : nokia, samsung, LG, …), 
*đời máy, 
*ngày tháng sản xuất (có thể dùng kiểu xâu), 
*giá bán (tính theo USD). 
In ra màn hình thông tin về điện thoại đắt giá nhất và rẻ nhất.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
typedef struct money_type{
    int dollar;
    int vnd;
    int yen;
}money;
typedef struct Phone_Model{
    char name[30];
    char version[30];
    char date_of_manufacture[30];
    money price;
}phone;
void nhap(phone *a,int n){
    puts("\n=======Nhap thong tin cac mau dien thoai=======");
    for(int i=0;i<n;i++){
        printf("\nNhap mau thu %d",i+1);
        printf("\n\tNhap ten: ");
        fflush(stdin);
        gets(a[i].name);
        printf("\n\tNhap doi may: ");
        fflush(stdin);
        gets(a[i].version);
        printf("\n\tNhap ngay san xuat: ");
        fflush(stdin);
        gets(a[i].date_of_manufacture);
        printf("\n\tNhap gia: ");
        printf("\n\t\tTheo Dollar: ");
        fflush(stdin);
        scanf("%d",&a[i].price.dollar);
        printf("\n\t\tTheo VND: ");
        fflush(stdin);
        scanf("%d",&a[i].price.vnd);
        printf("\n\t\tTheo YEN: ");
        fflush(stdin);
        scanf("%d",&a[i].price.yen);
    }
}
int the_most_expensive(phone *a,int n){
    int max=0;
    for(int i=1;i<n;i++){
        if(a[max].price.dollar<a[i].price.dollar)
        max=i;
    }
    return max;
}
int cheapest(phone *a,int n){
    int min=0;
    for(int i=1;i<n;i++){
        if(a[min].price.dollar>a[i].price.dollar)
        min=i;
    }
    return min;
}
int main() {
    int n;
    puts("Nhap so luong mau dien thoai: ");
    scanf("%d",&n);
    phone *array = (phone*) malloc(n*sizeof(phone));
    nhap(array,n);
    int max = the_most_expensive(array,n);
    int min = cheapest(array,n);
    puts("Mau dien thoai dat nhat la: ");
    printf("\nTen: %s\nMau: %s\nNgay san xuat: %s\nGia:\n\t%d USD\n\t%d VND\n\t%d YEN",array[max].name,array[max].version,array[max].date_of_manufacture,array[max].price.dollar,array[max].price.vnd,array[max].price.yen);
    puts("Mau dien thoai re dat nhat la: ");
    printf("\nTen: %s\nMau: %s\nNgay san xuat: %s\nGia:\n\t%d USD\n\t%d VND\n\t%d YEN",array[min].name,array[min].version,array[min].date_of_manufacture,array[min].price.dollar,array[min].price.vnd,array[min].price.yen);
    return 0;
}