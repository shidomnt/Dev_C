#include<stdio.h>
void nhapmatran(int a[][10],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
}
void xuatmatran(int a[][10],int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
}
int main(){
    int a[10][10];
    int m,n;
    scanf("%d%d",&m,&n);
    nhapmatran(a,m,n);
    xuatmatran(a,m,n);
    return 0;
}