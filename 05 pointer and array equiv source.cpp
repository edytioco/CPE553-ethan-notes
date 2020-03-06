#include <iostream>
using namespace std;

int main() {
    // remember with pointers, read backwards to figure out the nature of the pointer
    int x[10];
    x[0] = 5;
    int* const p = x;           // p is a constant pointer. this is set to the start of array x.

    const int y[10] = {3};
    const int* q = &y[0];       // q is a pointer to constant int's. q is READ ONLY. q can change to where it points to.

    int a = 2;
    const int* z = &a; // z is READ ONLY. it can point to a, and a can change, but z CANNOT change a.

    // you CAN assign a constant pointer to a non-constant int (pointer is read-only)
    // you CANNOT assign a non-constant pointer to a constant int (the pointer shouldn't be allowed to change a const)

    // you used to be able to typecast to get around the constant stuff,
    // and it will compile, but i still cannot change the value of const int b
    const int b = 7;
    int *qq = (int*) &b;
    *qq = 2;
    cout << "did i change b = 7 to something else? result: " << b << endl;
    const int * const r = y;    // r is a constant pointer that points to integer constants


    const double pi = 3.14159265;
    double *dp = (double*)&pi;
    *dp = 4; // let's see what happens when we try to change the value of a const double

    return 0;
}