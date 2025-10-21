#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main(){
    double yn, y, eps = 1e-5, x, summ;
    x = 3;
    x *= M_PI / 180;
    summ = x;
    yn = x; 
    int i = 1;
    do {
        i += 2;
        y = yn;
        yn *= (x * x);
        if (i % 2 == 0){
            summ += yn / i;
        } else {
            summ -= yn / i;
        }
    } while (abs((yn / i) - (y / (i - 2))) > eps);
    cout << endl << summ << endl << atan(x) << endl;
    return 0;
}