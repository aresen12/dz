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
        x = 2 * (double) rand() / RAND_MAX;
        y = 2 * (double) rand() / RAND_MAX;
        if (x * x + y * y <= 4 && y >= x){
            cnt_in += 1;
        }
    }
    s_sektor = ((float) cnt_in / n) * 8;
    cout << s_sektor << endl;
    cout << "проверка " << M_PI * 4 * 2 / 8 << endl;
    return 0;
}