#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>
void nhap(long a[],long n){
    for(long i=0;i<n;i++)
        scanf("%li",&a[i]);
}
void swap(long *a,long *b){
    long temp = *a;
    *a = *b;
    *b = temp;
}
long partition(long *a,long low,long high){
    long pivot = a[high];
    long left = low;
    long right = high - 1;
    while(true){
        while(left <= right && a[left] > pivot)
            left++;
        while(left <= right && a[right] < pivot)
            right--;
        if(left > right)
            break;
        swap(&a[left],&a[right]);
        left++;
        right--;
    }
    swap(&a[left],&a[high]);
    return left;
}
void sort(long *a,long low, long high){
    if(low<high){
        long pivot = partition(a,low,high);
        sort(a,low,pivot-1);
        sort(a,pivot+1,high);
    }
}
int main(){
    long n;
    scanf("%li",&n);
    long a[n];
    nhap(a,n);
    sort(a,0,n-1);
    long a1=0,b1=0;
    long i;
    for(i=0;i<n;i++){
        if(a[i]==a[i+1]){
            a1=a[i];
            break;
        }
    }
    for(long j=i+2;j<n;j++){
        if(a[j]==a[j+1]){
            b1=a[j];
            break;
        }
    }
    printf("%lli",a1*b1);
}