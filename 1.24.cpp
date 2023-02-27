#include<stdio.h>
#include<conio.h>

typedef struct HopSua{
	char NhanHieu[20];
	float TrongLuong;
	int Ngay;
}HOPSUA;
void nhapHopSua(HOPSUA*hp)
{
	printf("\nNhap nhan hieu:");
	scanf("%s",&hp->NhanHieu);
	fflush(stdin);
	printf("\nNhap trong luong:");
	scanf("%f",&hp->TrongLuong);
	printf("\nNhap ngay:");
	scanf("%d",&hp->Ngay);
}
void xuatHopSua(HOPSUA hp)
{
	printf("loai sua :%s\n",hp.NhanHieu );
	printf("Trong luong :%1.fg\n",hp.TrongLuong );
	printf("Date:%dend use \n",hp.Ngay );
}
int main()
{
	HOPSUA hp;
	nhapHopSua(&hp);
	xuatHopSua(hp);
	return 0;
}