#include <iostream>
using namespace std;

int main(void) {
    int x = 26;
    int y = 68;

    /* 94 */
    x += y;
    cout << x << endl;
    /* 26 */
    x -= y;
    cout << x << endl;
    /* 1768 */
    x *= y;
    cout << x << endl;
    /* 26 */
    x /= y;
    cout << x << endl;
    /* 26 */
    x %= y;
    cout << x << endl;

    /* 0 */
    x = 26;
    x &= y;
    cout << x << endl;
    /* 94 */
    x = 26;
    x |= y;
    cout << x << endl;
    /* 94 */ 
    x = 26;
    x ^= y;
    cout << x << endl;
    /* 13 */
    x = 26;
    x >>= 1;
    cout << x << endl;
    /* 52 */
    x = 26;
    x <<= 1;
    cout << x << endl;

    return 0;
}
