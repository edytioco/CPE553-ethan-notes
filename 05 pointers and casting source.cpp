#include <iostream>
using namespace std;
int main() {
    double d = 1.123456789012345;
    float f = (float)d;     // also how Java does it.
    float f2 = float(d);    // updated C++ casting

    int a = 1234567000;
    double *p;

    // p = &a; will not work. the compiler knows that i'm being stupid
    p = (double*) &a;
    // [ a a a a ] [ d d d d ]
    //   ^double pointer
    // the double pointer will think that there's more to the number after the first 4 bytes.
    // BUT, int is only 4 bytes. so, the double pointer will be reading beyond that because it thinks it's reading 8 bytes

    return 0;
}