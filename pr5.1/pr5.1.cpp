// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double h(const double a, const double b); // прототип
int main()
{
	double g, s;
	cout << "g = "; cin >> g;
	cout << "s = "; cin >> s;
	double c = (h(g + 1,s) + h(g, s + 1) *h(g, s + 1)) /( 1 + h(g * g, s * s) * h(g * g, s * s) * h(g*g, s*s) * h(g * g, s * s) * h(g * g, s * s) * h(g * g, s * s));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b) // визначення
{
	return (a * a - b * b);
}
