#include<conio.h>
#include<stdio.h>

typedef struct VePhim{
	char TenPhim[20];
	float  GiaTien;
	int ThoiGIan;
	int NgayXem;
}VEPHIM;
void nhapVePhim(VEPHIM*vp)

{
	printf("\nNhap ve phim:");
	scanf("%s",&vp->TenPhim);
	fflush(stdin);
	printf("\nNhap gia tien:");
	scanf("%f",&vp->GiaTien);
	printf("\nNhap thoi gian:");
	scanf("%d",&vp->ThoiGIan);
	printf("\nNhap Ngay xem:");
	scanf("%d",&vp->NgayXem);

}
void xuatVePhim(VEPHIM vp)
{
	printf("\nTen Phim:%s\n",vp.TenPhim);
	printf("\nGia Ve :%1.f.000vnd\n",vp.GiaTien);
printf("\nThoi gian :%d\n",vp.ThoiGIan);
printf("\nNgay xem: %d\n",vp.NgayXem);
}
int main(){
	VEPHIM vp;
	nhapVePhim(&vp);
	xuatVePhim(vp);
 return 0;
}