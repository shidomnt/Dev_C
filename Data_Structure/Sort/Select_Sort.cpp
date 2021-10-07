#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
void Select_sort(int a[], int size){
    for(int i=0;i<size -1 ;i ++){
        for(int j = i+1; j < size ;j++){
            if(a[i] > a[j]){
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
    Select_sort(a,n);
    for(int i=0; i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}