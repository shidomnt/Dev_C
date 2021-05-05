#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int giaithua(int n){
    int gt=1;
    for(int i=2;i<=n;i++){
        gt*=i;
    }
    return gt;
}
int tohopchap2(int n){
    int ts=giaithua(n);
    int ms=giaithua(n-2)*giaithua(2);
    return ts/ms;
}
void bin(int a,int *binary){
    int i=15;
    while(a/2!=0){
        *(binary+i)=a%2;
        a/=2;
        i--;
    }
    *(binary+i)=a%2;
}
int andb(int *binary1,int *binary2){
    int dec[16];
    for(int i=0;i<16;i++){
        if(*(binary1+i)==1&&*(binary1+i)==*(binary2+i))
        dec[i]=1;
        else {
        dec[i]=0;
        }
    }
    int kq=0;
    for(int i=0;i<16;i++){
        kq+=dec[i]*pow(2,15-i);
    }
    return kq;
}
int orb(int *binary1,int *binary2){
    int dec[16];
    for(int i=0;i<16;i++){
        if(*(binary1+i)==0&&*(binary1+i)==*(binary2+i))
        dec[i]=0;
        else {
        dec[i]=1;
        }
    }
    int kq=0;
    for(int i=0;i<16;i++){
        kq+=dec[i]*pow(2,15-i);
    }
    return kq;
}
int xorb(int *binary1,int *binary2){
    int dec[16];
    for(int i=0;i<16;i++){
        if(*(binary1+i)!=*(binary2+i))
        dec[i]=1;
        else {
        dec[i]=0;
        }
    }
    int kq=0;
    for(int i=0;i<16;i++){
        kq+=dec[i]*pow(2,15-i);
    }
    return kq;
}
void sapxep(int a[],int t){
    for(int i=1;i<t;i++){
        int j=i-1;
        int temp=a[j+1];
        while(j>=0&&temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int timmax(int a[],int t,int k){
    int max=0;
    for(int i=0;i<t;i++){
        int temp=max;
        if(a[i]>max)
        max=a[i];
        if(max>=k)
        max=temp;
    }
    return max;
}
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int t=tohopchap2(n);
  int aand[t];
  int aor[t];
  int axor[t];
  int i=0;
  for(int a=1;a<n;a++){
      for(int b=a+1;b<=n;b++){
        int *binary1;
        binary1=(int*) calloc(16,sizeof(int));
        int *binary2;
        binary2=(int*) calloc(16,sizeof(int));
        bin(a,binary1);
        bin(b,binary2);
        aand[i]=andb(binary1, binary2);
        aor[i]=orb(binary1, binary2);
        axor[i]=xorb(binary1, binary2);
        i++;
        free(binary1);
        free(binary2);
      }
  }
  sapxep(aand,t);
  sapxep(aor,t);
  sapxep(axor,t);
  printf("%d\n",timmax(aand,t,k));
  printf("%d\n",timmax(aor,t,k));
  printf("%d\n",timmax(axor,t,k));
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
