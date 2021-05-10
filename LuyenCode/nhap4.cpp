#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool kiemtra(long n){
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return true;
}
int main(){
    int n;
    scanf("%d",&n);
    long a[n][2];
    long max=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<2;j++){
            scanf("%li",&a[i][j]);
            if(a[i][j]>max&&j==1) max = a[i][j];
        }
    long b[max];
    int i;
    int dem=0;
    for(i=2;i<=max;i++){
        if(kiemtra(i)){
            b[dem]=i;
            dem++;
        }
    }
    for(int j=0;j<n;j++){
        int pos1=0,pos2=dem;
        while(b[pos1]<a[j][0]) pos1++;
        while(b[pos2]>a[j][1]) pos2--;
        printf("%d\n",pos2-pos1+1);
    }
    
}