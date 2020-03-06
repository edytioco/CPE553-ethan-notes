// author: Ethan DyTioco
// lecutre 05 pointers 09-27-2019

#include <iostream>
#include <string>
using namespace std;

// passing by reference: that & symbol sends a pointer to the memory address!
void f(int& x){
    x = 0;
}

int main() {
    int a; // order of variables in memory is NOT GUARANTEED

    cout << &a << '\n';
    // address of a, where it lives in memory
    // normally, we don't care where int a lives, and we do not get to choose
    // probably 12 hex digits or so.

    int b = 2;
    cout << &b << '\n'; // the address of b, where it lives in memory

    // sets it in memory, but now you can't change the variable since it's constant.
    // so, why are you doing this?
    // const int c;
    const int d = 54; // but this one is legal

    f(b); // this can work
    // f(d); // this is illegal, since d is a constant int. even passing it by reference won't let you change it.


    // ================================ POINTERS ================================
	// read the name backwards to figure out the nature of the pointer.
    int *p;         // this reads as: "p is a pointer to an integer". Pointers are 64 bits (8 bytes)
    int *q = &a;    // this reads as: "q is a pointer that points to the mem address of a"
    *q = 5;         // now the value of a = 5

    // array name is a pointer to the first element. you can't change where this is pointing.
    double x[10];

    cout << x << '\n';  // prints pointer to the start
    double* dp = &x[0]; // these two are the same. they point to the first element.
    double* dp2 = x;
    dp++;               // advance to the next element (8 bytes at a time because it's a double)

    dp = x + 5;         // same as &x[5]
    *dp = 2.5;          // same as x[5] = 2.5

    p = (int*)x;        // types don't match, but it's a legal thing to do. this will look at the first 4 bytes of your double

    // ======== BUGS ========
    // pointer P is uninitialized and holds a random 64 bit address.
    // this address can be outside the memory of this program. that'll be really unstable
    // memory protection is a real deal. you don't want a program (like a virus) to go looking outside the program,
    // and into other programs to look at what's inside
    // int *badPointer;
    // int wrong = *badPointer; // DON'T DO THIS

    // ======== pointer shenanigans ======== (will be quizzed)
    int someA = 2;
    int intX[10];
    int *pointer = intX;

    int y[10] = {3};
    pointer = y;
    cout << *pointer << endl;   // 3
    pointer++;
    *pointer = 19;              // y[1] = 19
    ++*pointer;                 // increment what "pointer" is pointing to. y[1] = 20;

    int intQ = *pointer++;      // intQ = 20, and then "pointer" is pointing to y[2]
    (*pointer)++;               // y[2] increments, so now y[2] = 1
    intQ = (*pointer)++;        // first intQ = 1, and then y[2] = 2
    intQ = ++(*pointer);        // first y[2] = 3, and then intQ = 3
    intQ = *++pointer;          // pointer = &y[3], and then intQ = 0
    intQ = ++*pointer;          // y[3] increments from 0 to 1, and then intQ = 1

    return 0;
}