#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	double x, y;

	x = 5;
	y = (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3 * sqrt(x) - (2 / sqrt(x)));

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	printf("¬ведите x:\n");
	scanf("%lf", &x);
	y = (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3 * sqrt(x) - (2 / sqrt(x)));

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	system("pause");
	return 0;
}
