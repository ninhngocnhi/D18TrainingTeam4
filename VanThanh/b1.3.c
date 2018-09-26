#include <stdio.h>
int main ()
{
	int r;
	const float pi = 3.14;
	printf("Nhap ban kinh hinh tron: \n");
	scanf("%d",&r);
	printf("chu vi cua hinh tron la: %.2f", 2*r*pi);
	return 0;
}
