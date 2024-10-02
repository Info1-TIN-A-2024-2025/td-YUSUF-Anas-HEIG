#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	if (argc != 3)
	{
		printf("Expected 2 arguments. Program terminated.\n");
		return 0;
	}

	double u = atof(argv[1]);
	double r = atof(argv[2]);
	if (r <= 0.)
	{
		printf("Ohm's Law only takes into account non-null positive resistances. Program terminated.\n");
		return 0;
	}

	printf("Current value is %.10e\n", u / r);

	return 0;
}