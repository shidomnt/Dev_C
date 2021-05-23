#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
void merge(int *a, int left, int mid, int right)
{
    //Chia a thành 2 phần:
    //Phần 1: Sử dụng i là biến chạy từ left -> mid
    //Phần 2: Sử dụng j là biến chạy từ mid + 1 -> right
    int i = left;
    int j = mid + 1;
    //Mảng temp lưu mảng a đã được sắp xếp
    int temp[left + right + 1];
    //Lưu ý: k chạy trong đoạn [left,right]
    for (int k = left; k <= right; k++)
    {
        //Nếu i vượt quá mid thì copy toàn bộ phần tử còn lại bên j vào temp
        if (i > mid)
        {
            temp[k] = a[j];
            j++;
            continue;
        }
        //Nếu j vượt quá mid thì copy toàn bộ phần tử còn lại bên i vào temp
        if (j > right)
        {
            temp[k] = a[i];
            i++;
            continue;
        }
        //Phần tử nào nhỏ(lớn) hơn thì cho vào mảng temp, đồng thời tăng biến chạy tương ứng lên 1
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
    }
    //Copy mảng temp đã sắp xếp vào a
    for (int k = left; k <= right; k++)
    {
        a[k] = temp[k];
    }
}
void merge_sort(int *a, int left, int right)
{
    //Thực hiện chia đôi mảng thành các mảng con cho đến khi mỗi mảng con chỉ còn 1 phần tử
    if (left < right)
    {
        int mid = (left + right) / 2;
        merge_sort(a, left, mid);
        merge_sort(a, mid + 1, right);
        merge(a, left, mid, right);
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
    int n = 9;
    //scanf("%d",&n);
    int a[n] = {0, 4, 8, 3, 1, 4, 7, 8, 2};
    //nhap(a,n);
    printf("\nTruoc: ");
    xuat(a, n);
    merge_sort(a, 0, n - 1);
    printf("\nSau: ");
    xuat(a, n);
    return 0;
}