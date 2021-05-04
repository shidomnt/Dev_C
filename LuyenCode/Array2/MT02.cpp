#include<stdio.h>
void nhapmatran(int a[][100],int m, int n){
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}
int tong(int a[][100],int m, int n){
    int s=0;
    for(int i=1;i<m;i+=2){
        for(int j=0;j<n;j++)
        s+=a[i][j];
    }
    return s;
}
int main(){
    int a[100][100];
    int m,n;
    scanf("%d%d",&m,&n);
    nhapmatran(a,m,n);
    printf("%d",tong(a,m,n));
    return 0;
}