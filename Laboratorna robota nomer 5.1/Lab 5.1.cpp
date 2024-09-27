// Lab 5_1

#include <iostream>
#include <cmath>

using namespace std;

double g(const double a, const double b);

int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double c = g((s * s), t + 1) + g((t * t), s + 1);

	cout << "c = " << c << endl;
	return 0;
}

double g(const double a, const double b)
{
	return (sin(a) * sin(b)) / ((a * a) + (b * b));
}