#include <iostream>
using namespace std;

int main(void) {
    int x = 19;
    int y = 81;

    /* 100 */
    cout << x + y << endl;
    /* -62 */
    cout << x - y << endl;
    /* 1539 */
    cout << x * y << endl;
    /* 0 */
    cout << x / y << endl;
    /* 20 */
    cout << ++x << endl;
    /* 20 */
    cout << x++ << endl;
    /* 20 */
    cout << --x << endl;
    /* 20 */
    cout << x-- << endl;
    /* 9 */
    cout << (x >> 1) << endl;
    /* 38 */
    cout << (x << 1) << endl;

    return 0;
}
