#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, cnt_in;
    cnt_in = 0;
    double x, y, s_sektor;
    cout << "введите n да побольше" << endl;
    cin >> n;
    for (int i = 0; i < n + 1; i++){
        x = (double) 2 * rand() / RAND_MAX;
        y = (double) 2 * rand() / RAND_MAX;
        if ((y * y + x * x) <= 4 && (y * y + x * x) >= 1){
            cnt_in += 1;
        }
    }
    s_sektor = ((float) cnt_in / n) * 4;
    // полщадь 1/4
    cout << s_sektor * 4 << endl;
    cout << "проверка " << M_PI * 4 - M_PI << endl;
    return 0;
}