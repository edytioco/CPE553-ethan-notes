#include <iostream>
using namespace std;

int main() {
    int x[10] = {19, 2, 4}; // the remaining spots = 0
    int *p = x + 3;         // points to x[3], which is zero.
    *p-- = 22;              // x[3] = 22, and then p points to x[2]
    *p-- -= 2;              // x[2] = 2, and then p points to x[1]

    for (int i = 0; i < 3; i++)
        *++p *= 2;          // p points to x[2], and then x[2] *2 = 4
                            // p points to x[3], and then x[3] *2 = 44
                            // p points to x[4], and then x[4] *2 = 0
    for (int* p = x; p < x+10; p++)
        cout << *p << ' ';
    // 19 2 4 44 0 0 0 0 0 0

    return 0;
}