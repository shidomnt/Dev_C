#include<stdio.h>
#include<conio.h>
void thu(int *a){
	(*a)+=5;
}
int main(){
	int a;
	scanf("%d",&a);
	thu(&a);
	getch();
	printf("%d",a);
	getch();
}

