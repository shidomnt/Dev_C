#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//Con ham Try chua viet xong
void Swap(char *a, char *b)
{
    char PtrTemp[strlen(a) + 1];
    memset(PtrTemp, '\0', sizeof(PtrTemp));
    strcpy(PtrTemp, a);
    strcpy(a, b);
    strcpy(b, PtrTemp);
}
int Partition(char **array, int low, int high)
{
    char *pivot = array[high];
    int left = low;
    int right = high - 1;
    while (1)
    {
        while (left <= right && strcmp(array[left], pivot) < 0)
            left++;
        while (left <= right && strcmp(array[right], pivot) > 0)
            right--;
        if (left > right)
            break;
        Swap(array[left], array[right]);
        left++;
        right--;
    }
    Swap(array[left], array[high]);
    return left;
}
//Ham sap xep
void Sort(char **array, int low, int high)
{
    if (low < high)
    {
        int pivot = Partition(array, low, high);
        Sort(array, low, pivot - 1);
        Sort(array, pivot + 1, high);
    }
}
//Ham nhap mang
void Nhap(char **array, int size)
{
    for (int i = 0; i < size; i++)
    {
        fflush(stdin);
        scanf("%[^\n]", array[i]);
    }
}
//Sinh to hop
char Try(char **suggest, char **try_list, int M, int K, int c)
{
    int r = 0;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < K; j++)
        {
            try_list[r][c] = suggest[i][j];
            if (c == M)
                r++;
            else
                Try(suggest, try_list, M, K, c + 1);
        }
}
//Nhap tay cac to hop
void nhaptest(char **try_list, long r)
{
    for (long i = 0; i < r; i++)
    {
        fflush(stdin);
        scanf("%[^\n]", try_list[i]);
    }
}
//Khoi phuc
void Restore(char *source, char **suggest, int M, int K, long X)
{
    long r = pow(K, M);
    char **try_list = (char **)malloc(sizeof(char *) * r);
    for (int i = 0; i < r; i++)
    {
        try_list[i] = (char *)malloc(sizeof(char) * (M + 1));
        memset(try_list[i], '\0', sizeof(try_list[i]));
    }
    //Try(suggest,try_list,M,K,0);
    nhaptest(try_list, r);
    Sort(try_list, 0, r - 1);
    for (int i = 0; i < M; i++)
    {
        char *PtrM = strchr(source, 35);
        source[PtrM - source] = try_list[X - 1][i];
    }
}
int main()
{
    int N, M, K;
    long X;
    scanf("%d %d %d %li", &N, &M, &K, &X);
    char *source = (char *)malloc(sizeof(char) * (N + 1));
    fflush(stdin);
    scanf("%[^\n]", source);
    char **suggest = (char **)malloc(sizeof(char *) * M);
    for (int i = 0; i < M; i++)
        suggest[i] = (char *)malloc(sizeof(char) * (K + 1));
    Nhap(suggest, M);
    Restore(source, suggest, M, K, X);
    printf("%s", source);
    for (int i = 0; i < M; i++)
        free(suggest[i]);
    free(suggest);
    free(source);
    return 0;
}