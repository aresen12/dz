#define USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <locale>
using namespace std;


int main(){
    setlocale(LC_ALL, "RU");
    double x, y, max_y;
    max_y = -100000000000000000000.;
    for (int i = 0; i < (int) 10 / 0.01; i++){
        x = -4 + i * 0.01;
        y = x * sin(x) - (x / 2.) * cos(x / 2);
        if (y > max_y){
            max_y = y;
        }
    }
    cout << max_y << endl << "Второе задание" << endl;
    // второе задание
    float summ = 1;
    int helper = 2;
    for (int i = 2; i < 1025; i++){
        summ += (1. / i);
        if (i == helper){
            cout << i << "\t" << summ << endl;
            helper *= 2;
        }
    }
    cout << summ << endl;
}