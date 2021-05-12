#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
void counting_sort(int a[],int n){
    //Tim max , min cua mang a
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i])
        max=a[i];
        else if(min>a[i])
        min=a[i];
    }
    //Khai báo mảng đếm số lượng mỗi phần tử có trong mảng a với có k phần tử k = max - min + 1
    int k=max-min+1;
    int count[k];
    //Gán cho tất cả phần tử trong mảng đếm = 0 trước khi thực hiện đếm
    for(int i=0;i<k;i++)
    count[i]=0;
    //Số lượng phần tử a[i] trong mảng của được lưu vào count[a[i]-min]
    for(int i=0;i<n;i++){
        count[a[i]-min]++;
    }
    //Thay đổi mảng count để count[i] mang chỉ số của phần tử mảng a sau khi đã sắp xếp
    //Phần tử từ có chỉ số từ 1 đến cuối = nó + với phần tử liền trước nó
    for(int i=1;i<k;i++){
        count[i]+=count[i-1];
    }
    //Khai báo mảng b chứa các phần tử sau khi đã sắp xếp
    int b[n];
    /*Dựa vào giá trị của từng phần tử tại mảng count 
    mà ta biết được chỉ số của ô cần điền giá trị vào cho đúng
    thứ tự sắp xếp
    */
    for(int i=0;i<n;i++){
        b[count[a[i]-min]-1] = a[i];
        count[a[i]-min]--;
    }
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    counting_sort(a,n);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}