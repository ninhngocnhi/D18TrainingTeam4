#include<stdio.h>
int main (void)
{
	int a ;
	long long b ; 
	char c ;
	float d ;
	double e ;
	scanf ("%d %lld %c %f %lf",&a,&b,&c,&d,&e);
	printf ("%d \n",a);
	printf ("%lld \n",b);
	printf ("%c \n",c);
	printf ("%.3f \n",d);
	printf ("%.9lf \n",e);
	return 0 ;
}
