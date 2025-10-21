#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main(){
    long double yn, y, eps = 1e-5, x, summ;
    x = 3;
    x = x * M_PI / 180;
    summ = x;
    yn = x;
    int i = 1;
    do {
        i += 2;
        y = yn;
        yn *= ((x * x) / ((i - 1) * i));
        summ += yn;
    } while (abs(yn - y) > eps);
    cout << endl << summ << endl << sinh(x) << endl;
    return 0;
}