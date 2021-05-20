#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct Diem
{
    int toan;
    int ly;
    int cpp;
};
typedef struct sinh_vien
{
    char name[101];
    struct Diem diem;
} SV;
void nhapten(SV *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        scanf("%[^\n]", a[i].name);
    }
}
void nhapdiem(SV *a, int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i].diem.toan);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i].diem.ly);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i].diem.cpp);
}
int tongdiem(SV a)
{
    return a.diem.toan + a.diem.ly + a.diem.cpp;
}
void winner(SV *a, int n)
{
    int max = tongdiem(a[0]);
    for (int i = 0; i < n; i++)
        if (max < tongdiem(a[i]))
            max = tongdiem(a[i]);
    int i = 0;
    while (i < n)
    {
        if (tongdiem(a[i]) == max)
        {
            printf("%s %d %d %d\n", a[i].name, a[i].diem.toan, a[i].diem.ly, a[i].diem.cpp);
        }
        i++;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    SV list[n];
    nhapten(list, n);
    nhapdiem(list, n);
    winner(list, n);
    return 0;
}
