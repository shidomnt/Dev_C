#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void nhap( long *array,long n){
    for(int i=0;i<n;i++){
        scanf("%li",array+i);
    }
}

long binary_search1( long *array,long left, long right, long val){
    if(right>=left){
        long mid = (left+right)/2;
    	if(array[mid] == val)
        	return mid;
    	else if(array[mid] > val)
        	return binary_search1(array,left,mid-1,val);
    	else
        	return binary_search1(array,mid+1,right,val);
    }
    else
        return -1;
}

int binary_search(int *array,int n,int val){
   int left = 0;
   int right = n-1;
   int mid;
   while(right>=left){
      mid=(left+right)/2;
      if(array[mid]==val)
      return mid;
      else if(array[mid]>val)
      right=mid-1;
      else
      left=mid+1;
   }
   return -1;
}
void counting_sort( long *array,long n){
     long max=array[0];
     long min=array[0];
    for(long i=1;i<n;i++){
        if(max<array[i])
            max=array[i];
        else if(min>array[i])
            min=array[i];
    }
     long k = max - min + 1;
    int count[k];
    for( long i=0;i<k;i++)
        count[i]=0;
    for(long i=0;i<n;i++)
        count[array[i]-min]++;
    for( long i=1;i<k;i++)
        count[i]+=count[i-1];
     long b[n];
    for(long i=0;i<n;i++){
        b[count[array[i]-min]-1]=array[i];
        count[array[i]-min]--;
    }
    for(long i=0;i<n;i++)
        array[i]=b[i];
}
long timkiemtuyentinh( long *a,long n,long val){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==val)
            break;
    }
    return i;
}
int main(){
    long n,m;
    scanf("%li %li",&n,&m);
     long a[n], b[m];
    long ketqua[m];
    nhap(a,n);
    nhap(b,m);
     long *copyofa = ( long*) malloc(sizeof(long)*n);
    for(long i=0;i<n;i++)
        copyofa[i]=a[i];
    counting_sort(copyofa,n);
    for(long i=0;i<m;i++){
        ketqua[i]=binary_search1(copyofa,0,n-1,b[i]);
        //ketqua[i]=binary_search(copyofa,n,b[i]);
    }
    /*Ketqua[i] luu vi tri xuat hien cua b[i] trong copyofa, 
    neu b[i] khong xuat hien thi ketqua[i] co gia tri -1*/
    for(int i=0;i<m;i++){
        if(ketqua[i]==-1)
            printf("%d ",0);
        else{
            long k=timkiemtuyentinh(a,n,copyofa[ketqua[i]]);
            printf("%li ",k+1);
        }
    }
    free(copyofa);
    return 0;
}