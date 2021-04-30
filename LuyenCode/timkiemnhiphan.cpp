#include<stdio.h>
#include<stdbool.h>
void binsearch(long int a[],long int n,long int b[],long int m,long int ketqua[]){
    for(int i=0;i<m;i++){
        long int l=0;
        long int r=n-1;
        bool check=true;
        long int mid;
        while(r>=l){
            mid=l+(r-l)/2;
            if(a[mid]==b[i]){
                while(a[mid]==b[i]){
                    mid-=1;
                }
                ketqua[i]=mid+2;
                check=false;
                break;
            }
            if(a[mid]>b[i])
            r=mid-1;
            if(a[mid]<b[i])
            l=mid+1;
        }
        if(check) ketqua[i]=0;
    }
}
void nhapmang(long int a[],long int n){
    for(long int i=0;i<n;i++)
    scanf("%li",&a[i]);
}

int main(){
    long int n,m;
    scanf("%li%li",&n,&m);
    long int a[n],b[m];
    nhapmang(a,n);
    nhapmang(b,m);
    long int ketqua[m];
    binsearch(a,n,b,m,ketqua);
    for(long int i=0;i<m;i++)
    printf("%li ",ketqua[i]);
    return 0;
}