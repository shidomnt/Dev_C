#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdarg.h>
int maxn(int count,...){
    //Khai bao con tro
    //va_list <pointer's name>;
    va_list ap;
    //Cap bo nho cho pointer, gom count o nho
    //va_start(pointer,size);
    va_start(ap,count);
    //va_arg de truy cap vao cac bien (...)
    //va_arg(pointer,data_type);
    //moi lan gan va_arg cho 1 bien thi pointer++
    int max=va_arg(ap,int);
    //Vong lap quet het cac phan tu (...)
    for(int i=2;i<=count;i++){
        //Vao thoi diem gan gia tri va_arg cho a, pointer++
        int a=va_arg(ap,int);
        if(max<a)
        max=a;
    }
    //Giai phong bo nho pointer
    va_end(ap);
    return max;
}
int main() {
    printf("%d",maxn(10,4,5,8,7,456,123,8,45,12,78));
    return 0;
}