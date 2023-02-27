
#include<stdio.h>

typedef struct DonThuc{
	int n,a;
 
}DONTHUC;
void nhapDonThuc(DONTHUC*dt)
{
printf("\nNhap he so:");
scanf("%d",&dt->a);
printf("\nNhap bac don thuc:");
scanf("%d",&dt->n);
}
void xuatDonThuc(DONTHUC dt)
{
	printf("%dx^%d",dt.a,dt.n);
}
int main()
{
  DONTHUC dt;
  nhapDonThuc(&dt);
  xuatDonThuc(dt);
  return 0;
}