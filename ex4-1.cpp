#include <iostream>
using namespace std;

#define PI 3.1415

int main(void) {
    float r;
    cin >> r;
    if (!(r >= 0)) {
        cout << "提出资讯" << endl;
        return 0;
    }
    cout << "面积：" << PI * r * r << endl;
    cout << "周长：" << 2 * PI * r << endl;
    return 0; 
}
