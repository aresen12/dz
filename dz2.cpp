#define USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;


int main(){
    double x, a, h, n, x_min, x_max, S5;
    cout << "a, h, x1 < x2\n";
    cin >> a >> h >> x_min >> x_max;
    n = (x_max - x_min) / h;
    S5 = sqrt(5);
    for (int i = 0; i < n + 1; i++){
        cout << x_min + i * h << " " 
        << S5 * pow(sin((x_min + h * i) * (x_min + h * i) + a / 2), 2) * cos(x_min + h * i)
         << endl;

    } ;
    cout << "a, h, x1 < x2\n";
    cin >> a >> h >> x_min >> x_max;
    n = (x_max - x_min) / h;
    for (int i = 0; i < n + 1; i++){
        cout << x_min + i * h << " " 
        << atan(sqrt(sin((a - x_min + h * i) / a)))
         << endl;

    } ;
    cout << "a, h, x1 < x2\n";
    cin >> a >> h >> x_min >> x_max;
    n = (x_max - x_min) / h;
    double SA = sqrt(a);
    for (int i = 0; i < n + 1; i++){
        x = x_min + h * i;
        cout << x << " " 
        << SA * sin(x) / (cos(x) * cos(x) + x)
         << endl;

    } ;
    cout << "a, h, x1 < x2\n";
    cin >> a >> h >> x_min >> x_max;
    n = (x_max - x_min) / h;
    for (int i = 0; i < n + 1; i++){
        x = x_min + h * i;
        cout << x << " " 
        << sin(sqrt(3.2 + x)) / (a + cos(x + M_PI / 7))
         << endl;
    };
    cout << "a, h, x1 < x2\n";
    cin >> a >> h >> x_min >> x_max;
    n = (x_max - x_min) / h;
    SA = sqrt(a);
    for (int i = 0; i < n + 1; i++){
        x = x_min + h * i;
        cout << x << " " 
        << SA * cos(x + 1.7) / (3 * sin(a * x))
                 << endl;

    } ;
    return 0;
}