#define _USE_MATH_DEFINES
#include <iostream>
#include <locale>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double a;
    cout << "Введите a\n";
    cin  >> a;
    a *= 180 / M_PI;
    cout << (2 * pow(sin(3 * M_PI - 2 * a), 2) * pow(cos(5 * M_PI + 2 * a), 2)) << endl;
    cout << 1. / 4 - (1. / 4 * sin(5 * M_PI / 2 - 8 * a)) << endl;
    cout << "ex2\n";
    cout <<  cos(a) + sin(a) + cos(3 * a) + sin(3 * a) << endl;
    cout << 2 * sqrt(2) * cos(a) * sin(M_PI /4 + 2 * a) << endl;
    cout << "ex3\n";
    double sqrt_2_a = sqrt(2 * a);
    cout << ((a + 2) / sqrt_2_a - a / (sqrt_2_a + 2) + 2 / (a - sqrt_2_a)) * ((sqrt(a) - sqrt(2)) / (a + 2)) << endl;
    cout << 1. / (sqrt(a) + sqrt(2)) << endl;
    cout << "ex4\n";
    cout << sqrt(2 * a + 2 * sqrt(a * a - 4)) / (sqrt(a * a - 4) + a + 2) << endl;
    cout << 1. / sqrt(a + 2) << endl;
    cout << "ex5\n";
    cout << (1 / (((1. + a + a * a) / (2. * a + a * a) + 2 - (1. - a + a * a) / (2 * a - a * a))))
        * (5 - 2 * a * a) << endl;
    cout << (4 - a * a) / 2 << endl;
    _getch();
}

