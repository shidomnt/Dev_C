#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
void swap(long *a,long *b){
    long temp = *a;
    *a = *b;
    *b = temp;
}
long phanvung(long *a,long low,long high){
    long pivot = a[high];
    long left = low;
    long right = high - 1;
    while(true){
        while(left<=right && a[left] < pivot )
            left++;
        while(left<=right && a[right] > pivot)
            right--;
        if(left>=right) 
            break;
        swap(&a[left],&a[right]);
        left++;
        right--;
    }
    swap(&a[left],&a[high]);
    return left;
}
void sort(long *a,long low,long high){
    if(low<high){
        long pivot = phanvung(a,low,high);
        sort(a,low,pivot-1);
        sort(a,pivot+1,high);
    }    
}