#include <iostream>
using namespace std;

void f(int x){ // x is a copy
    cout << x;
    x = 0;
}

void g(int& x){ // pass by reference, so this will change the variable
    cout << x;
    x = 0;
}

void h(int* x){
    cout << *x;
    *x = 1;
}

int main() {
    // internally, a reference is a pointer. so what's the difference?
    // a reference is a pointer, but it never admits that it's a pointer lol

    int a = 2;
    const int b = 3;
    int& r = a;
    r = b;  // a is now 3.
    cout << &r << '\t' << &a << '\n'; // &r and &a will show the same thing.

    int* p = &a; // p points to a
    cout << p << '\t' << &a << '\n';
    cout << &p << '\n';

    f(a);
    cout << a << '\n'; // a is still the same

    g(a); // a IS NOW ZERO

    h(&a); // passing address of a, so a could change

    return 0;
}