#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#define MAX_QUEUE 100
int queue[MAX_QUEUE];
int tail = 0;
int head = 0;
int containing = 0;
int IsEmpty();
int IsFull();
void Over_size();
void Put(int value);
void Get();
int main()
{
    int n, temp;
    int dem = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    while (1)
    {
        temp = n % 10;
        Put(temp);
        n /= 10;
        if (n / 10 == 0)
        {
            Put(n);
            break;
        }
        dem++;
        if (dem > MAX_QUEUE - 2)
        {
            puts("Hang cho day!");
            return 0;
        }
    }
    while (!IsEmpty())
        Get();
    return 0;
}
int IsEmpty()
{
    return (containing == 0);
}
int IsFull()
{
    return (containing == MAX_QUEUE);
}
void Over_size()
{
    if (head > MAX_QUEUE - 1)
        head = 0;
    else if (tail > MAX_QUEUE - 1)
        tail = 0;
}
void Put(int value)
{
    if (IsEmpty())
    {
        queue[head] = queue[tail] = value;
        containing++;
        return;
    }
    tail++;
    Over_size();
    queue[tail] = value;
    containing++;
}
void Get()
{
    if (IsEmpty())
    {
        puts("\nHang cho rong!");
        return;
    }
    printf("%d", queue[head]);
    head++;
    Over_size();
    containing--;
}