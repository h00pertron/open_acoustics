#include <stdio.h>
#include <math.h>

int main ()
{
	int swl = 100;
	int r = 10;

	float log_r = log10 (r);

	int p2 = swl - (20 * log_r) - 8;

	printf("%f\n", log_r);
	printf("%i\n", p2);

	return 0;
}
