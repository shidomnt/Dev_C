#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
void dem(int *a,int size){
    int max=a[0], min=a[0];
    for(int i=0;i<size;i++){
        if(max<a[i])
        max = a[i];
        if(min>a[i])
        min = a[i];
    }
    int k = max - min + 1;
    int dem[k];
    for(int i=0;i<k;i++){
        dem[i]=0;
    }
    for(int i=0;i<size;i++){
        dem[a[i]-min]++;
    }
    for(int i=0;i<k;i++){
        if(dem[i] == 0)
        continue;
        printf("\nSo %d xuat hien %d lan.",i+min,dem[i]);
    }
}
void nhap(int *a, int size){
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
}
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    nhap(a,n);
    dem(a,n);
    return 0;
}