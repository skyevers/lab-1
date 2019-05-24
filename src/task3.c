#include <stdio.h>
#include <math.h>
#include <locale.h>

double f(double x);

int main()
{
	setlocale(LC_ALL, "RUS");
	double x, y;

	printf("������� x:\n");
	scanf("%lf", &x);
	y = f(x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	system("pause");
	return 0;
}

double f(double x)
{
	return (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3 * sqrt(x) - (2 / sqrt(x)));
}