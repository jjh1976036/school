#include <stdio.h>

int main(void)
{
	unsigned char uc = 255 + 1;
	short         s = 32767 + 1;
	float         min = 1.175E-50;
	float         max = 3.403E39;

	printf("%u\n", uc);
	printf("%d\n", s);
	printf("%e\n", min);
	printf("%f\n", max);

	return 0;
}