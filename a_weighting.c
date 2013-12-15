#include <stdio.h>
#include <math.h>

int main ()
{
	int freq = 1000;

	double a = 1.562339 * pow (freq, 4);
	double b = pow (freq, 2) + pow (107.65265, 2);
	double c = pow (freq, 2) + pow (737.86223, 2);
	double d = 2.242881 * pow (10, 16) * pow (freq, 4);
	double e = pow (freq, 2) + pow (20.598997, 2);
	double f = pow (freq, 2) + pow (12194.22, 2);

	double aa = 10 * log10(a / (b * c));
	double bb = 10 * log10(d / (pow (e, 2) * pow (f, 2)));

	double WA = aa + bb;

	printf("freq = %dHz\n", freq);
	printf("a = %f\n", a);
	printf("b = %f\n", b);	
	printf("c = %f\n", c);
	printf("d = %f\n", d);
	printf("e = %f\n", e);
	printf("f = %f\n", f);

	printf("aa = %f\n", aa);
	printf("bb = %f\n", bb);

	printf("WA = %f\n", WA);

	return 0;
}
	
