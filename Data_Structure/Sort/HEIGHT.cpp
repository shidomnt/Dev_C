/*
Lớp KC97 tại trường học Free Contest 
có NN học sinh, các học sinh được đánh số 
từ 1 đến N. Học sinh i có chiều cao là A[i] 
i.Với mỗi học sinh i từ 1 đến N, hãy đếm xem 
có bao nhiêu học sinh có chiều cao thấp hơn so với học sinh i.
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void nhap(long *a,long size){
    for(long i=0;i<size;i++)
        scanf("%li",&a[i]);
}
void xuat(long *a,long size){
    for(long i=0;i<size;i++)
        printf("%li ",a[i]);
}
//Chac chan tim thay
long binary_search(long *a,long left, long right,long val){
    long mid = left + (right-left)/2;
    if(a[mid] == val)
        return mid;
    if(a[mid] > val)
        return binary_search(a,left,mid-1,val);
    if(a[mid] < val)
        return binary_search(a,mid+1,right,val);
}
void swap(long *a, long *b){
    long temp = *a;
    *a = *b;
    *b = temp;
}
long partition(long *a,long low,long high){
    long pivot = a[high];
    long left = low;
    long right = high -1 ;
    while(1){
        while(left<=right && a[left] < pivot)
            left++;
        while(left<=right && a[right] > pivot)
            right--;
        if(left>right)
            break;
        swap(&a[left],&a[right]);
        left++;
        right--;
    }
    swap(&a[left],&a[high]);
    return left;
}
void quick_sort(long *a, long low, long high){
    if(low<high){
        long pivot = partition(a,low,high);
        quick_sort(a,low,pivot-1);
        quick_sort(a,pivot+1,high);
    }
}
//Ham dem tra ra con tro tro toi mang chua ket qua dem
//So phan tu cua mang dem chinh la n
long *dem(long *a,long n){
    long *dem = (long*) malloc(sizeof(long)*n);
    long copy_of_a[n];
    for(long i=0;i<n;i++)
        copy_of_a[i]=a[i];
    quick_sort(copy_of_a,0,n-1);
    for(long i=0;i<n;i++){
        long pos=binary_search(copy_of_a,0,n-1,a[i]);
        while(copy_of_a[pos]==copy_of_a[pos-1])
            pos--;
        dem[i]=pos;
    }
    return dem;
}
int main(){
    long n;
    scanf("%li",&n);
    long a[n];
    nhap(a,n);
    long *ptr = dem(a,n);
    xuat(ptr,n);
    free(ptr);
    return 0;
}