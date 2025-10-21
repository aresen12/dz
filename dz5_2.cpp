#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main(){
    double yn, y, eps = 1e-5, x, summ;
    // cin >> x;
    x = 3;
    summ = 1;
    yn = 1;
    int i = 0;
    do {
        i += 1;
        y = yn;
        yn = abs(yn * ((x * x) / i));
        if (i % 2 == 0){
            summ += yn;
        } else {
            summ -= yn;
            yn *= -1;
        }
    } while (abs(yn - y) > eps);
    cout <<summ << endl;
    cout << exp(-1 * x * x) << endl;
    return 0;
}