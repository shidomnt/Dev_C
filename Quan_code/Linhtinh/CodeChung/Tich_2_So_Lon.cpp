#include<stdio.h>
#include<math.h>

int tichHaiSo(long X, long Y){
    long x=X/10, y=Y/10;
    long x1=X%10,y1=Y%10;
    if(x!=0){
        if(y!=0){
            return 110* tichHaiSo(x,y) + x1*y1*11 - tichHaiSo(x-x1, y-y1);
        } else{
            return x1*Y*11 + tichHaiSo(x-x1, Y);
        }
    } else{
        if(y!=0){
            return y1*X*11 + tichHaiSo( X , y-y1);
        } else{
            return X*Y;
        }
       
    }
}

int main(){
    long X,Y,S;
    printf("\nNhap X, Y: ");
    scanf("%ld%ld", &X, &Y);
    S = tichHaiSo(X,Y);
    printf("%ld", S);
    return 0;
}