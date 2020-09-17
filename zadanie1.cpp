#include <cmath>
#include <cstdlib>
#include <iostream>


using namespace std;

double case2(double a, double b, double c, double d)
{
	return ((a / c) * (b / d)) - ((a * b - c) / (c * d));
}

double case4(double x, double y)
{
	return ((x + y) / (y + 1)) - ((x * y - 12) / (34 + x));
}

double case6(double x)
{
	return (x - ((pow(x, 3)) / 3) + ((pow(x, 5)) / 5));
}

double case10(double x, double y)
{
	return (pow((x + 1) / (x - 1), x)) + (18 * x * (pow(y, 2)));
}

int main()
{
	system("chcp 1251>nul");
	int a, b, c, d, x, y;
	cout << "Введите a,b,c,d";
	cin >> a >> b >> c >> d;
	cout << "Введите x,y";
	cin >> x >> y;
	cout << case2(a, b, c, d) << " " << case4(x, y) << " " << case6(x) << " " << case10(x, y) << " ";
	return 0;
}