#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	double x, y, z;
	printf("ВВЕДИТЕ ЗНАЧЕНИЯ X, Y, Z\n");
	scanf("%lf %lf %lf", &x, &y, &z);
	double w;
	// -2.235 * pow(10, -2) 2.23 15.221
	x = -2.235 * pow(10, -2);
	y = 2.23;
	z = 15.221;

	w = pow(pow(x, 6) + pow(log(y), 2), 1 / 3.0) +
		(exp(fabs(x - y)) * pow(fabs(x - y), x + y)) /
		(atan(x) + atan(z));
	printf("**************************\n");
	printf("РЕЗУЛЬТАТ ФОРМУЛЫ\n");
	printf("%W = %lf\n", w);
	printf("**************************");
	return 0;
}