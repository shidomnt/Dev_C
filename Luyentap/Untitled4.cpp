#include<iostream>
#include<math.h>
using namespace std;
int main()
{

	float a, b, c, p;
	cout<<"Nhap canh thu nhat: ";
	cin>>a;
	cout<<"Nhap canh thu hai: ";
	cin>>b;
	cout<<"Nhap canh thu ba: ";
	cin>>c;
	p=((a+b+c)/2);
	cout<<"S= "<<sqrt(p*(p-a)*(p-b)*(p-c));
	
}
