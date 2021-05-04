#include <stdio.h>
 
int main(){
    // Khai báo mảng có 5 phần tử
    int arr[] = {1, 2, 3, 4, 5};
 
    printf("Dia chi cua mang arr = %d\n", &arr);
    printf("Gia chi cua mang arr = %d\n", arr);
    // Thử in địa chỉ của từng phần tử
    // sizeof (arr): Kích thước của mảng
    // sizeof (int): Kích thước của kiểu int
    for(int i = 0; i < sizeof (arr) / sizeof (int); i++){
        printf("Dia chi cua arr[%d] = %d\n", i, &arr[i]);
    }
 
}