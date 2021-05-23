#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//Những phần tử sẽ được sắp xếp nổi lên trên
void Sort(int *a, int n)
{
    //i là số phần tử đã được sắp xếp
    int i = 0;
    //change kiểm tra xem lần quét này có phần tử nào nằm sai vị trí không
    int change = 1;
    //Lặp liên tục thao tác kiểm tra phần tử
    //Kết thúc khi không có phần tử nào nằm sai vị trí (change = 0)
    //Hoặc khi đã sắp xếp hết các phần tử ( i == n-1)
    while (change || i != n - 1)
    {
        change = 0;
        //Quét từ cuối lên đầu mảng chưa được sắp xếp, tìm phần tử nằm sai vị trí
        for (int j = n - 1; j > i + 1; j--)
        {
            if (a[j - 1] > a[j])
            {
                swap(&a[j - 1], &a[j]);
                change = 1;
            }
        }
        //Mỗi lần quét từ cuối lên đầu ta thu được 1 phần tử đã được sắp xếp
        i++;
    }
}
void nhap(int *a, int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
}
void xuat(int *a, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}
int main()
{
    int n = 15;
    //scanf("%d",&n);
    int a[n] = {0, 4, 8, 3, 1, 4, 7, 8, 2, 9, 12, 89, 46, 78, 23};
    //nhap(a,n);
    printf("\nTruoc: ");
    xuat(a, n);
    Sort(a, n);
    printf("\nSau: ");
    xuat(a, n);
    return 0;
}