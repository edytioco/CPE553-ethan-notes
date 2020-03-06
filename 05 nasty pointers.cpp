#include <iostream>
using namespace std;

int main() {
    int a[10] = {3, 4, 5};
    double b[20] = {2.5, 3.5, 4, 5.5};
    int *p = &a[0];
    int *r = a;

    // for loops can manage multiple variables inside the parentheses.
    for (int i = 0, j = 22; i <10; i++, j--)
        cout << j;

    // remember, *r points to a[0] at the beginning.
    for (int count = 10; count > 0; count--, r++)
        *r = 3;
    // count = 10, a[0] = 3, count = 9
    // count = 9, a[1] = 3, count = 8
    // count = 8, a[2] = 3, count = 7 ...

    return 0;
}