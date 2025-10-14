#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, cnt_in;
    cnt_in = 0;
    double x, y, y2, s, s_sektor;
    cout << "введите n да побольше" << endl;
    cin >> n;
    for (int i = 0; i < n + 1; i++){
        x = (double) rand() / RAND_MAX;
        y = (double) rand() / RAND_MAX;
        y2 = -1 * x + 1;
        if (y * y + x * x <= 1 && y >= y2){
            cnt_in += 1;
        }
    }
    s = 1; 
    s_sektor = ((float) cnt_in / n) * 2;
    // полщадь 1/4 круга 
    cout << s_sektor << endl;
    cout << "проверка " << (M_PI - sqrt(2) * sqrt(2)) / 2 << endl;
    return 0;
}