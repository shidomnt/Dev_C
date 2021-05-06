#include<stdio.h>
#include<stdlib.h>
int binary_search(int *array,int left,int right,int value){
    int mid=(left+right)/2;
    if(array[mid]==value)
    return mid;
    if(value>array[mid])
    return binary_search(array,mid+1,right,value);
    if(value<array[mid])
    return binary_search(array,left,mid-1,value);
}
void nhapmang(int *array,int n){
    for(int i=0;i<n;i++){
        printf("Nhap so thu %d: ",i+1);
        scanf("%d",&array[i]);
    }
}
void xuatmang(int *array,int n){
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}
void sapxep(int *array,int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=array[j+1];
        while(j>=0&&temp<array[j]){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
}
int main(){
    int n;
    printf("Nhap so pt cua mang: ");
    scanf("%d",&n);
    int *array=(int*) malloc(n*sizeof(int));
    nhapmang(array,n);
    printf("\nMang truoc khi sap xep: ");
    xuatmang(array,n);
    sapxep(array,n);
    printf("\nMang sau khi sap xep: ");
    xuatmang(array,n);
    printf("\nNhap so muon tim: ");
    int value;
    scanf("%d",&value);
    int location=binary_search(array,0,n-1,value);
    printf("\nSo %d o vi tri so %d",value,location+1 );
    free(array);
    return 0;
}
