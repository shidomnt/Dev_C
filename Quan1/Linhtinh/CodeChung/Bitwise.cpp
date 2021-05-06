#include<stdio.h>
#include<string.h>
#include<math.h>

void chuyenHeSo(int arr[], int a){
    int i,j;
    int L=11;
    for(j=0;j<L;j++){
        arr[j]=0;
    }
    for(i=L-1;i>=0;i--){  
        arr[i]= a%2;
        a/=2;
    }
}

void AND(int arr[], int N[], int K[]){
    int i=0;
    int L=11;
    for(i;i<L;i++){
        if(N[i] == 1 && K[i] == 1){
            arr[i]=1;
        } else arr[i]=0;
    }
}

void OR(int arr[], int N[], int K[]){
    int i=0;
    int L=11;
    for(i;i<L;i++){
        if(N[i] == 1 || K[i] == 1){
            arr[i]=1;
        } else arr[i]=0;
    }
}

void XOR(int arr[], int N[], int K[]){
    int i=0;
    int L=11;
    for(i;i<L;i++){
        if(N[i] == K[i]){
            arr[i]=0;
        } else arr[i]=1;
    }
}

int back(int arr[]){
    int i,s;
    int L=11;
    for(i=0;i<L;i++){
        s+= (arr[L-i-1])*pow(2,i);
    }
    return s;
}

int soSanh(int arr[], int max, int k){
    int i,j;
    for(i=0;i<max-1;i++){
        if(arr[i] > arr[max-1] && arr[i]<k){
            int tmp=arr[max-1];
            arr[max-1]=arr[i];
            arr[i]=tmp;
        }
    }
    return arr[max-1];
}

int main(){
    int n,k;
    int L=11,i,j;
    int va[L],hoac[L],sor[L];
    scanf("%d%d", &n, &k);
    int N[L], K[L]; 
    int max=0;
    for(i=0;i<n;i++){
        max+= (i*(k-i));
    }
    max++;
    int a[max],x[max],o[max];
    int z;
    for(z=0;z<max;z++){
        for(i=1;i<=n;i++){
            for(j=i+1;j<=k;j++){
                chuyenHeSo(N,i);
                chuyenHeSo(K,j);
                AND(va,N,K);
                OR(hoac,N,K);
                XOR(sor,N,K);  
            }
        }
    a[z]=back(va);
    o[z]=back(hoac);
    x[z]=back(sor);
    }
    printf("%d\n%d\n%d\n", soSanh(a,max,k), soSanh(o,max,k), soSanh(x,max,k));
    return 0;
}