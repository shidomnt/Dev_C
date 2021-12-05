#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void nhap( long *array,long n){
    for(int i=0;i<n;i++){
        scanf("%li",array+i);
    }
}
long binary_search( long *array,long left, long right, long val){
    if(right>=left){
        long mid = (left+right)/2;
    	if(array[mid] == val){
          //lựa phần tử có chỉ số bé nhất
            while(array[mid-1]==val){
                mid--;
            }
            return mid+1;
        }
    	else if(array[mid] > val)
        	return binary_search(array,left,mid-1,val);
    	else
        	return binary_search(array,mid+1,right,val);
    }
    else
        return -1;
}
int main(){
    long n;
    scanf("%li",&n);
    long a[n];
    nhap(a,n);
    long m;
    scanf("%li",&m);
    long b[m];
    nhap(b,m);
    long f[m];
    long s=0;
    for(int i=0;i<m;i++){
        f[i]=binary_search(a,0,n-1,b[i]);
        s+=f[i];
    }
    printf("%li",(long)pow(2,s%30));
    return 0;
}