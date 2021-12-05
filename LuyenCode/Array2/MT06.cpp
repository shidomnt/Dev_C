#include<stdio.h>
#include<stdbool.h>
#include<math.h>
void nhapmatran(int a[][100],int m, int n){
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}
bool sochinhphuong(int a){
    int d=sqrt(a);
    if(d*d==a) return true;
    else return false;
}
void sapxepmang(int a[],int slg){
    for(int i=0;i<slg;i++){
        int j=i-1;
        int temp=a[j+1];
        while(j>=0&&temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
bool loccp(int a[][100],int m, int n, int mangcp[]){
    int dem=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(sochinhphuong(a[i][j])){
                mangcp[dem]=a[i][j];
                dem++;
            }
        }
    }
    if(dem){
        sapxepmang(mangcp,dem);
        return true;
    }
    else return false;
    }
void xuatmang(int a[]){
    for(int i=0;a[i]!=0;i++){
        if(a[i]==a[i+1]) continue;
        else printf("%d ",a[i]);
    }
}
int main(){
    int a[100][100];
    int m,n;
    scanf("%d%d",&m,&n);
    nhapmatran(a,m,n);
    int mangcp[m*n];
    bool check=loccp(a,m,n,mangcp);
    if(check) xuatmang(mangcp);
    else printf("NOT FOUND");
    return 0;
}