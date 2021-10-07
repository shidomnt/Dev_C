#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
void Nhap(int a[], int size)
{
	for (int i = 0; i < size; i++)
		scanf("%d", &a[i]);
}
int Ghidiem(int a[], int size, int K)
{
	
}

int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	int a[N];
	Nhap(a, N);
	printf("%d", Ghidiem(a, N, K));
	return 0;
}