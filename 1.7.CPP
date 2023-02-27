#include<stdio.h>
#include<conio.h>

typedef struct Ngay{
	int Ngay,Thang,Nam;
}NGAY;
void nhapNgay(NGAY*ng)
{
	printf("\nNhap Ngay:");
	scanf("%d",&ng->Ngay);
	printf("\nNhap thang:");
	scanf("%d",&ng->Thang);
	printf("\nNhap Nam:");
	scanf("%d",&ng->Nam);
}
void xuatNgay(NGAY ng )
{
	printf("%d-%d-%d HBPD Thanh Huyen nha......",ng.Ngay,ng.Thang,ng.Nam);
}
int main()
{
	NGAY ng;
	nhapNgay(&ng);
	xuatNgay(ng);
	return 0;
}