#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double q = 0, w = 0, e = 0, r = 0;
	scanf("%lf", &q);
	w =q - 32;
	e = (double)5 /(double) 9;
	r = e * w;
	printf("%.3lf\n", r);
	return 0;
}