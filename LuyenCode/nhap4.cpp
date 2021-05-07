#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    printf("Nhap ma sinh vien: ");
    char matruong[5];
    char makhoa[10];
    scanf("%[a-zA-Z]s",&matruong);
    scanf("%",makhoa);
    printf("\n%s\n%s",matruong,makhoa);
    return 0;
}