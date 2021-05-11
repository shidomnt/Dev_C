#include<stdio.h>
#include<stdlib.h>
int main(){
    int **arr,i;
    arr= (int **)malloc(10 * sizeof(int));
    for(i=0;i<10;i++){
        arr[i]= (int *)malloc(5 * sizeof(int));
    }
    return 0;
}