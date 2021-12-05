/*
void Try(i){
    for (mọi giá trị j có thể gán cho x[i]){
        Thử cho x[i] = j;
        Nếu x[i] là phần tử cuối cùng trong cấu hình
            In ra cấu hình;
        Nếu không{
            Khi nhận việc đã cho x[i] nhận giá trị j (optional);
            Try(i+1) Gọi đệ quy chọn tiếp x[i+1];
            Bỏ ghi nhận việc thử j cho x[j] (optional);
        }
    }
}
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
int n;
int k;
int x[20];
int y[20];
void Try(int i);
void In(int a[], int size);
int main()
{
    for (int i = 0; i < 20; i++)
        y[i] = 0;
    scanf("%d %d", &n, &k);
    Try(1);
    getch();
    return 0;
}
void In(int a[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void Try(int i)
{
    //Vòng for chạy qua tất cả các giá trị j có thể thử cho x[i]
    for (int j = 1; j <= n; j++)
    {
        //Nếu giá trị j đã được dùng thì bỏ qua
        if (y[j])
            continue;
        //Thử x[i] = j
        x[i - 1] = j;
        //Nếu đó là phần tử cuối cùng thì in ra 
        if (i == k)
            In(x, k);
        else
        {
            //Khi nhận việc đã dùng giá trị j
            y[j] = 1;
            //Thử tiếp x[i+1]
            Try(i + 1);
            //Sau khi thử x[i+1], ta chuẩn bị thử giá trị tiếp theo cho x[i] nên ta cho giá trị j tự do
            y[j] = 0;
        }
    }
}