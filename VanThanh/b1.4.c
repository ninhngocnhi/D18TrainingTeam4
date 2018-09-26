#include <stdio.h>
int main ()
{
	const float pi=3.14;
	int r;
	printf("Nhap ban kinh hinh tron: \n");
	scanf("%d",&r);
	printf("dien tich phan to dam la: %.2f",(pi*r*r)-(2*r*r));
	return 0;
}
