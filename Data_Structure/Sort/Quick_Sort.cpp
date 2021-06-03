/*
Quick Sort:
Dựa vào phần tử pivot để chia mảng thành 2 phần:
1.Mảng bên trái chứa các phần tử bé hơn pivot
2.Mảng bên phải chứa các phần tử lớn hơn hoặc bằng pivot
Thực hiện Quick Sort tên mỗi phần của mảng vừa chia
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
void swap(long *a,long *b){
    long temp = *a;
    *a = *b;
    *b = temp;
}
long phanvung(long *a,long low,long high){
    //Chọn phần tử pivot là phần tử cuối cùng
    long pivot = a[high];
    long left = low;
    long right = high - 1;
    while(true){
        //Nếu phần tử a[left] nằm đúng vị trí thì bỏ qua
        while(left<=right && a[left] < pivot )
            left++;
        //Nếu phần tử a[right] nằm đúng vị trí thì bỏ qua
        while(left<=right && a[right] > pivot)
            right--;
        //Điều kiện dừng
        if(left>right) 
            break;
        //Đổi chỗ 2 phần tử nằm sai vị trí
        swap(&a[left],&a[right]);
        //Sau khi đổi chỗ dịch đến phần tử tiếp theo để tiếp tục
        left++;
        right--;
    }
    //Đổi chỗ phần tử pivot và phần tử cuối cùng để hoàn thành chia mảng làm 2 phần
    //Sau đó trả ra vị trí của phần tử pivot
    swap(&a[left],&a[high]);
    return left;
}
void sort(long *a,long low,long high){
    if(low<high){
        //Nhận vị trí của phần tử pivot
        long pivot = phanvung(a,low,high);
        //Chia mảng làm 2 phần rồi thực hiện Quick Sort trên 2 mảng con đó
        sort(a,low,pivot-1);
        sort(a,pivot+1,high);
    }    
}