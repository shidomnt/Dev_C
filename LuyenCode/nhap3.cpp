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
    for (int j = 1; j <= n; j++)
    {
        if (y[j])
            continue;
        x[i - 1] = j;
        if (i == k)
            In(x, k);
        else
        {
            y[j] = 1;
            Try(i + 1);
            y[j] = 0;
        }
    }
}