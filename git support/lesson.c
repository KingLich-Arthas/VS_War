#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
void main(void)
{
	float x, y, z, f, b;
	setlocale(LC_ALL, "rus");
	x = 1,58;
	y = 3,42;
	z = (3 * x) / (pow (cos(y), 2));
	f = (pow(z, 2) / (y + pow(x, 3))) + sin(y / 5);
	b = f;
	printf("Переменная z равна: %f\n", z);
	printf("Функия b равна: %f\n", b);
	_getch();
}