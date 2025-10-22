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
        y = (double) 2 * rand() / RAND_MAX;
        y2 = -1 * x  * x + 2;
        if (x <= y && y <= y2){
            cnt_in += 1;
        }
    }
    s_sektor = ((float) cnt_in / n) * 4;
    cout << s_sektor << endl;
    return 0;
}
