#include<stdio.h>
void nhapmtvuong(int a[][100],int n){
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}
int tongdcc(int a[][100],int n){
    int s=0;
    int i=0,j=0;
    while(i<n&&j<n){
        s+=a[i][j];
        i++;
        j++;
    }
    return s;
}
int main(){
    int a[100][100];
    int n;
    scanf("%d",&n);
    nhapmtvuong(a,n);
    printf("%d",tongdcc(a,n));
    return 0;
}