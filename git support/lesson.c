#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
void function (float  x, float y)
{
	float z = (3 * x) / (pow (cos(y), 2));
	float f = (pow(z, 2) / (y + pow(x, 3))) + sin(y / 5);
	float b = f;
	printf("Переменная z равна: %f\n", z);
	printf("Функия b равна: %f\n", b);
}
void main(void)
{
	float x, y, z, f, b;
	setlocale(LC_ALL, "rus");
	x = 1,58;
	y = 3,42;
	function(x, y);
	_getch();
}