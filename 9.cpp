#include <iostream>
#include <clocale>

int aX, aY, bX, bY, cX, cY;  // координаты точек
int a, b, c;  // коэфициенты уравнения прямой

int main()
{
	setlocale(LC_CTYPE, "rus");

	std::cout << "Введите координаты первой точки через пробел: ";
	std::cin >> aX >> aY;
	std::cout << "\nВведите координаты второй точки через пробел: ";
	std::cin >> bX >> bY;
	std::cout << "\nВведите координаты третьей точки через пробел: ";
	std::cin >> cX >> cY;

	if ((aX == bX && aY == bY) || (aX == cX && aY == cY) || (bX == cX && bY == cY))
	{
		std::cout << "\nУ двух точек совпадают координаты, треугольник построить невозможно.";
	}
	else
	{
		a = bY - aY;
		b = -(bX - aX);
		c = (aX * bY) - (bX * aY);
		
		if (a * cX + b * cY + c == 0)
		{
			std::cout << "\nТочки лежат на одной линии, треугольник построить невозможно.";
		}
		else
		{
			std::cout << "\nИз этих точек можно составить треугольник";
		}
	}
}
