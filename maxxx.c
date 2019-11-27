// Условная операция (тренарная)
#include <stdio.h>

int main ()
{
//	6>10 ? printf ("\n 6\n") : printf ("\n 10\n");
	char max;
	max = 6>10 ? 6 : 10;
	printf ("\n%d\n", max);

	return 0;
}

