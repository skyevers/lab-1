#include <math.h>
#include "func.h"

double x, y;

void f()
{
	y = (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3 * sqrt(x) - (2 / sqrt(x)));
}