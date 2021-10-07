#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

void Insert_sort(int a[], int size, int buocnhay = 1)
{
    for (int i = buocnhay; i < size; i++)
    {
        int temp = a[i];
        int j = i - buocnhay;
        while (j >= 0 && a[j] > temp)
        {
            a[j + buocnhay] = a[j];
            j-= buocnhay;
        }
        a[j + buocnhay] = temp;
    }
}

void Shell_sort(int a[], int size, int h[], int k)
{
    for (int i = 0; i < k; i++)
    {
        Insert_sort(a, size, h[i]);
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
    int n = 16;
    //scanf("%d",&n);
    int a[n] = {0, 4, 8, 3, 1, 4, 7, 8, 2, 9, 12, 89, 46, 78, 23,45};
    //nhap(a,n);
    int k = 4;
    int h[k] = {15,7,3,1};
    printf("\nTruoc: ");
    xuat(a, n);
    // Insert_sort(a, n);
    Shell_sort(a,n,h,k);
    printf("\nSau: ");
    xuat(a, n);
    return 0;
}