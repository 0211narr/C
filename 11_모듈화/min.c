#include "min.h"

int Min(int a, int b)
{
	if (a > b) return b;
	else if (b > a) return a;

	return 0;
}