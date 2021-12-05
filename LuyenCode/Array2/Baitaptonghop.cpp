#include<stdio.h>
#include<math.h>
void nhapmatran(int a[][100],int m,int n){          //Ham nhap ma tran
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmatran(int a[][100],int m,int n){          //Ham xuat ma tran
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        printf("%4d",a[i][j]);
        printf("\n");
    }
}
int tongpthangchan(int a[][100],int m,int n){       //Tinh tong cac phan tu o hang chan
    int s=0;
    for(int i=1;i<m;i+=2)
    for(int j=0;j<n;j++){
        s+=a[i][j];
    }
    return s;
}
int GTLNcotN(int a[][100],int m,int n,int cot){     //Tim gia tri lon nhat tai cot N
    int max=a[0][cot-1];
    for(int i=1;i<m;i++){
        if(max<a[i][cot-1]) max=a[i][cot-1];
    }
    return max;
}
int GTLN(int a[][100],int m, int n){                //Tim gia tri lon nhat
    int max=a[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<a[i][j]) max=a[i][j];
        }
    }
    return max;
}
int GTNN(int a[][100],int m, int n){                //Tim gia tri nho nhat
    int min=a[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(min>a[i][j]) min=a[i][j];
        }
    }
    return min;
}
void tong2matran(int a[][100],int b[][100],int c[][100],int m,int n){
    for(int i=0;i<m;i++){                           //Tinh tong 2 ma tran
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
void sapxephang(int a[][100],int m, int n){          //Sap xep ma tran theo hang
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int k=j-1;
            int temp=a[i][k+1];
            while(k>=0&&temp>a[i][k]){
                a[i][k+1]=a[i][k];
                k--;
            }
            a[i][k+1]=temp;
        }
    }
}
int tongpt(int a[][100],int m,int n){               //Tinh tong cac phan tu
    int s=0;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        s+=a[i][j];
    }
    return s;
}
int GTNNch3(int a[][100],int m, int n){                //Tim gia tri nho nhat %3==0
    int min=a[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(min>a[i][j]&&a[i][j]%3==0) min=a[i][j];
        }
    }
    if(min%3!=0) return 0;
    else return min;
}
void xoacot(int a[][100],int m,int &n,int pos){         //Ham xoa cot
    for(int i=0;i<m;i++){
        for(int j=pos-1;j<n;j++)
        a[i][j]=a[i][j+1];
    }
    n--;
}
void xoahang(int a[][100],int &m,int n,int pos){         //Ham xoa hang
    for(int i=0;i<n;i++){
        for(int j=pos-1;j<m;j++)
        a[j][i]=a[j+1][i];
    }
    m--;
}
void swap(int &a,int &b){                               //Ham doi vi tri 2 phan tu
    a=a^b;
    b=a^b;
    a=a^b;
}
void swaphang(int a[][100],int m,int n,int p1,int p2){  //Ham doi vi tri 2 hang
    for(int i=0;i<n;i++){
        swap(a[p1-1][i],a[p2-1][i]);
    }
}
void swapcot(int a[][100],int m,int n,int p1,int p2){   //Ham doi vi tri 2 cot
    for(int i=0;i<m;i++){
        swap(a[i][p1-1],a[i][p2-1]);
    }
}
int GTLNdcc(int a[][100],int m,int n){
    int i=1,j=1;
    int max=a[0][0];
    while(i<m&&j<n){
        if(max<a[i][j]) max=a[i][j];
        i++;
        j++;
    }
    return max;
}
int GTNNdcc(int a[][100],int m,int n){
    int i=1,j=1;
    int min=a[0][0];
    while(i<m&&j<n){
        if(min>a[i][j]) min=a[i][j];
        i++;
        j++;
    }
    return min;
}
int main(){
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int m,n;
    printf("Nhap so hang: ");
    scanf("%d",&m);
    printf("Nhap so cot: ");
    scanf("%d",&n);
    printf("Nhap ma tran A:\n");
    nhapmatran(a,m,n);
//Tong phan tu tai hang chan/GTLN cua 1 cot
    /*
    xuatmatran(a,m,n);  
    printf("Tong cac phan tu tren hang chan: %d\n",tongpthangchan(a,m,n));
    int cot;
    printf("Nhap cot can tim GTLN: ");
    scanf("%d",&cot);
    printf("Gia tri lon nhat cua cot %d la: %d",cot,GTLNcotN(a,m,n,cot));
    */
//GTLN/GTNN cua ma tran
   /*
    printf("GTLN= %d\n",GTLN(a,m,n));
    printf("GTNN= %d\n",GTNN(a,m,n));
    */
//Tong hai ma tran
    /*
    printf("Nhap ma tran B:\n");
    nhapmatran(b,m,n);
    tong2matran(a,b,c,m,n);
    printf("Tong 2 ma tran a,b la: \n");
    xuatmatran(c,m,n);
    */
//Sap xep ma tran theo hang/Tong cac phan tu/GTNN chia het cho 3
   /*
    sapxephang(a,m,n);
    printf("Sau khi sap xep: \n");
    xuatmatran(a,m,n);
    printf("Tong cac phan tu: %3d\n",tongpt(a,m,n));
    int GTNNc3=GTNNch3(a,m,n);
    if(!GTNNc3) printf("Khong co gia tri nao chia het cho 3!\n");
    else printf("GTNN chia het cho 3 la: %3d\n",GTNNc3);
    */
//Xoa cot
   /*
    printf("Nhap cot muon xoa: \n");
    int xcot;
    scanf("%d",&xcot);
    xoacot(a,m,n,xcot);
    printf("Mang sau khi xoa: \n");
    xuatmatran(a,m,n);
    */
//Xoa hang
    /*
    printf("Nhap hang muon xoa: \n");
    int xhang;
    scanf("%d",&xhang);
    xoahang(a,m,n,xhang);
    printf("Mang sau khi xoa: \n");
    xuatmatran(a,m,n);
    */
//Doi cho 2 hang/cot
    /*
    int p1,p2;
    printf("Nhap lan luot 2 hang muon doi: \n");
    scanf("%d%d",&p1,&p2);
    swaphang(a,m,n,p1,p2);
    printf("Mang sau khi doi: \n");
    xuatmatran(a,m,n);
    printf("Nhap lan luot 2 cot muon doi: \n");
    scanf("%d%d",&p1,&p2);
    swapcot(a,m,n,p1,p2);
    printf("Mang sau khi doi: \n");
    xuatmatran(a,m,n);
    */
//GTLN/GTNN tren duong cheo chinh
/*
    printf("GTLN tren duong cheo chinh la: %3d\n",GTLNdcc(a,m,n));
    printf("GTNN tren duong cheo chinh la: %3d\n",GTNNdcc(a,m,n));
    */
    return 0;
}