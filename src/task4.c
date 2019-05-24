#include <stdio.h>
#include <math.h>
#include <locale.h>

void f();
double x, result;

int main()
{
	setlocale(LC_ALL, "RUS");

	printf("¬ведите x:\n");
	scanf("%lf", &x);
	f();

	printf("x = %.4f\n", x);
	printf("result = %.4f\n", result);

	system("pause");
	return 0;
}

void f()
{
	result = (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3 * sqrt(x) - (2 / sqrt(x)));
}