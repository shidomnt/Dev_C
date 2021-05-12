/*
Tạo ra 3 struct về các thành phần của một chiếc máy tính bao gồm :
Màn hình :
-	Bật hay tắt
-	Độ sáng màn hình
CPU :
-	Tên CPU
-	Dung lượng cache (tính theo MB)
Mainboard :
-	Tên main
-	CPU được sử dụng (chính là struct của CPU kia)
Sau đó tạo 1 struct về máy tính bao gồm màn hình, và mainboard. 
Viết CT nhập thông tin cho chiếc máy tính đo (yêu cầu nhập thông tin cho cả CPU). 
Sau đó in các thông tin đó ra màn hình sao cho đẹp mắt nhất :x
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
typedef struct MONITOR{
    char power[10];
    float brightness;
}MONITOR;
typedef struct CPU{
    char name[30];
    int cache;
}CPU;
typedef struct MAINBOARD{
    char name[30];
    CPU cpu;
}MAINBOARD;
typedef struct Personal_Computer{
    MONITOR monitor;
    MAINBOARD mainboard;
}PC;
void nhap(PC *a,int n=1){
    printf("\n======== NHAP CAU HINH PC ========");
    for(int i=0;i<n;i++){
        printf("\n--- Man hinh ---");
        printf("\nNhap trang thai :");
        fflush(stdin);
        scanf("%s",a->monitor.power);
        printf("\nNhap do sang: ");
        scanf("%f",&a->monitor.brightness);
        printf("\n-- Main Board --");
        printf("\nNhap ten Main Board: ");
        fflush(stdin);
        scanf("%29[^\n]",a->mainboard.name);
        printf("\nNhap thong tin CPU: ");
        printf("\n\tNhap ten CPU: ");
        fflush(stdin);
        scanf("%29[^\n]",a->mainboard.cpu.name);
        printf("\n\tNhap dung luong bo nho CACHE: ");
        scanf("%d",&a->mainboard.cpu.cache);
    }
    system("cls");
}
int main() {
    PC a[1];
    nhap(a);
    return 0;
}
