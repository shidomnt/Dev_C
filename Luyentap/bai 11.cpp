//Tinh gia dien theo hoa don 
#include<stdio.h>
#include<math.h>
#define bac1 230
#define bac2 480
#define bac3 700
#define bac4 900
int main()
{
	float cu, moi,dinhmuc, vuotdinhmuc;
	printf("nhap so dien cu: ");
	scanf("%f",&cu);
	printf("nhap so dien moi: ");
	scanf("%f",&moi);
	float sudung=moi-cu;
	if(sudung<=50)
	{
		dinhmuc=sudung*bac1;
		vuotdinhmuc=0;
	}
	else if(50<sudung<=100)
	{
		dinhmuc=50*bac1;
		vuotdinhmuc=(sudung-50)*bac2;
	}
	else if(100<sudung<=150)
	{
		dinhmuc=50*230;
		vuotdinhmuc=50*bac2+(sudung-100)*bac3;
	}
	else
	{
		dinhmuc=50*230;
		vuotdinhmuc=50*bac2+50*bac3+(sudung-150)*bac4;
	}
	printf("chi so cu la: %.2f\nchi so moi la: %.2f\ntien tra dinh muc= %.2f VND\ntien tra vuot muc= %.2f VND\ntong= %.2f VND\n",cu,moi,dinhmuc,vuotdinhmuc,dinhmuc+vuotdinhmuc);
	return 0;
}
