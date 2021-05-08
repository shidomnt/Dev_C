#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void nhapmatran(int **a,int r,int c){
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d", &a[i][j]);
}
void xuatmatran(int **a,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        printf("%d ", a[i][j]);
        printf("\n");
    }
    
}
int max(int *a,int c){
    int macc=a[0];
    for(int i=1;i<c;i++){
        if(macc<a[i])
        macc=a[i];
    }
    return macc;
}
int main(){
    int r;
    scanf("%d",&r);
    int c;
    scanf("%d",&c);
    int **a = (int**) malloc(r*sizeof(int*));
    for(int i=0;i<c;i++){
        a[i] = (int*) malloc(c*sizeof(int));
    }
    nhapmatran(a,r,c);
    for(int i=0;i<r;i++){
        printf("Max in row %d: %d\n",i+1,max(a[i],c));
    }
    
    return 0;
    
}