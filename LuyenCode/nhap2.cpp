#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
typedef struct Coordinates{
    long x;
    long y;
}Toa_do;
typedef struct Count{
    long value;
    int soluong;
    char c;
}dem;
dem Max(Toa_do *a, int size){
    dem nx={a[0].x,1,'x'};
    dem ny={a[0].y,1,'y'};
    dem maxx= nx;
    dem maxy= ny;
    for(int i=0;i<size;i++){
        if(a[i].x == a[i+1].x){
            nx.soluong++;
        }
        else{
            if(nx.soluong>maxx.soluong)
                maxx=nx;
            nx.value = a[i+1].x;
            nx.soluong = 1;
        }
        if(a[i].y == a[i+1].y){
            ny.soluong++;
        }
        else{
            if(ny.soluong>maxy.soluong)
                maxy=ny;
            ny.value = a[i+1].y;
            ny.soluong = 1;
        }
    }
    return (maxx.soluong>maxy.soluong)?maxx:maxy;
}
void Nhap(Toa_do *a,int size){
    for(int i=0;i<size;i++)
        scanf("%li %li",&a[i].x,&a[i].y);
}
void Xuat(Toa_do *a,int size){
    for(int i=0;i<size;i++)
        printf("%li %li",a[i].x,a[i].y);
}
int main() {
    int n;
    scanf("%d",&n);
    Toa_do a[n];
    Nhap(a,n);
    dem max = Max(a,n);
    printf("%li %d",max.value,max.soluong);
    return 0;
}