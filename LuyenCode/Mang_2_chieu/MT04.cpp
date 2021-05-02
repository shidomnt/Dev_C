#include<stdio.h>
void nhapmatran(int a[][100],int m, int n){
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}
void sapxepcot(int a[][100],int m, int n, int cot){
    cot-=1;
    for(int i=0;i<m;i++){
        int temp=a[i][cot];
        int j=i-1;
        while(j>=0&&temp<a[j][cot]){
            a[j+1][cot]=a[j][cot];
            j--;
        }
        a[j+1][cot]=temp;
    }
}
void xuatmatran(int a[][100],int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
}
int main(){
    int a[100][100];
    int m,n,i;
    scanf("%d%d%d",&m,&n,&i);
    nhapmatran(a,m,n);
    sapxepcot(a,m,n,i);
    xuatmatran(a,m,n);
    return 0;
}