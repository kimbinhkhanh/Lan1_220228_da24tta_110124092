/*
MSSV 110124092
HO TEN : KIM BÌNH KHÁNH
lOP : DA24TTA
*/
#include<stdio.h>
#include<stdlib.h>
const int ngaytrongtuan=7;
void nhaptimehoctrongtuan(float n);
void hienthitimehoctrongtuan(float n);
float tongtimehoctrongtuan(float n);
int main()
{
	float n;
	do
	{
	printf("nhap thoi gian : ");
	scanf("%2f", &n);
	}
	while(n<0||n>15);
	nhaptimehoctrongtuan(n);
	hienthitimehoctrongtuan(n);
	return 0;
}
void nhaptimehoctrongtuan(float n)
{
	for(int i=0;i<ngaytrongtuan;i++)
	{
		do
		{
		printf("\nnhap thoi gian hoc moi ngay : ", i+2);
		scanf("%f", &n);
		}
		while(n<0||n>15);
	}
}
void hienthitimehoctrongtuan(float n)
{
	printf("\nthoi gian hoc tap trong tuan: ");
	for(int i=0;i<ngaytrongtuan;i++)
	{
		printf("\nthu %d: %2f gio",i+2 ,n);
	}
}
float tongtimehoctrongtuan(float n)
{
	int tong=0;
	for(int i=0;i<ngaytrongtuan;i++)
	{
		tong+=n;
	}
	return tong;
}
