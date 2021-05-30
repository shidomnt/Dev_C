#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct Coordinates{
    long x;
    long y;
}Toa_do;
typedef struct Count{
    long value;
    int soluong;
    char c;
}dem;
void Nhap(Toa_do *a,int size);
void Merge(Toa_do *a, int left, int mid, int right,char dieu_khien);
void Merge_sort(Toa_do *a, int left, int right,char dieu_khien);
int Stamina_cost(Toa_do *a, int size);
int main(){
    int so_cay;
    scanf("%d",&so_cay);
    Toa_do vuon_cay[so_cay];
    Nhap(vuon_cay,so_cay);
    int Cost = Stamina_cost(vuon_cay,so_cay);
    printf("%d",Cost);
    return 0;
}
void Nhap(Toa_do *a,int size){
    for(int i=0;i<size;i++)
        scanf("%li %li",&a[i].x,&a[i].y);
}
void Merge(Toa_do *a, int left, int mid, int right,char dieu_khien){
    int i = left;
    int j = mid + 1;
    Toa_do temp[left+right+1];
    for(int k = left; k<=right ;k++){
        if(i>mid){
            temp[k] = a[j];
            j++;
            continue;
        }
        if(j>right){
            temp[k] = a[i];
            i++;
            continue;
        }
        if(dieu_khien == 'x'){
            if(a[i].x < a[j].x){
            temp[k] = a[i];
            i++;
        	}
        	else{
            	temp[k] = a[j];
            	j++;
        	}
        }else{
            if(a[i].y < a[j].y){
            temp[k] = a[i];
            i++;
        	}
        	else{
            	temp[k] = a[j];
            	j++;
        	}
        }
    }
}
void Merge_sort(Toa_do *a, int left, int right,char dieu_khien){
    if(left<right){
        int mid = (left+right)/2;
        Merge_sort(a,left,mid,dieu_khien);
        Merge_sort(a,mid+1,right,dieu_khien);
        Merge(a,left,mid,right,dieu_khien);
    }
}
dem Max(Toa_do *a, int size){
    dem nx={a[0].x,1,'x'};
    dem ny={a[0].y,1,'y'};
    dem maxx= nx;
    dem maxy= ny;
    for(int i=0;i<size;i++){
        if(a[i].x == a[i+1].x){
            nx.soluong++;
        }
        else{
            if(nx.soluong>maxx.soluong)
                maxx=nx;
            nx.value = a[i+1].x;
            nx.soluong = 1;
        }
        if(a[i].y == a[i+1].y){
            ny.soluong++;
        }
        else{
            if(ny.soluong>maxy.soluong)
                maxy=ny;
            ny.value = a[i+1].y;
            ny.soluong = 1;
        }
    }
    return (maxx.soluong>maxy.soluong)?maxx:maxy;
}
int Fixa(Toa_do *a, int size, char dieu_khien){
    int dem = 0;
    int i = 0;
    while(i!=size-1){
        for(int j=0;j<size-1;j++){
            if(a[j].x + 1 != a[j+1].x && a[j].x < a[j+1].x && dieu_khien == 'x'){
                a[j].x++;
                dem++;
            }
            if(a[j].y + 1 != a[j+1].y && a[j].y < a[j+1].y && dieu_khien == 'y'){
                a[j].y++;
                dem++;
            }
            i++;
        }
    }
    return dem;
}
int Stamina_cost(Toa_do *a, int size){
    dem max = Max(a,size);
    int mid = (size-1)/2;
    Toa_do TB = a[mid];
    int Stamina = 0;
    for(int i=0;i<size;i++){
        if(max.c=='x'){
            Merge_sort(a,0,size-1,max.c);
            while(a[i].x<max.value){
                a[i].x++;
                Stamina++;
            }
            while(a[i].x>max.value){
                a[i].x--;
                Stamina++;
            }
            Merge_sort(a,0,size-1,'y');
            Stamina+= Fixa(a,size,'y');
        }
        else{
            Merge_sort(a,0,size-1,max.c);
            while(a[i].y<max.value){
                a[i].y++;
                Stamina++;
            }
            while(a[i].y>max.value){
                a[i].y--;
                Stamina++;
            }
            Merge_sort(a,0,size-1,'x');
            Stamina+= Fixa(a,size,'x');
        }
    }
    return Stamina;
}