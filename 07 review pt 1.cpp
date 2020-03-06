// ================ Midterm Review pt 1 ================
#include <iostream>
using namespace std;

// You can declare as many times as you want.
// All declarations end in a semicolon
// You can only define something once.

class A{};			// definition: class A (minimum 1 byte)

class A;
class A;
class A;
class A;

class B{
	B(int x){}
};

// function definition
void f(){
	cout << "called f()" << endl;
}

// function prototype (declaration)
void f();
void f();
void f();

// somebody else will write the definition (declaration)
extern void f();


int main(){
	int x = 2;				// declaration (but also definition)
	{
		int x = 3;			// this is legal because this x only exists in this scope
		cout << x << endl;	//output: 3
	}
	cout << x << endl;		// output: 2
	
	A a1;					// size: at least 1 byte
	A a2;					// if sizeof(a1) == 0, then a1 == a2?
	
	B b1;					// illegal: no matching constructor
	B b2(10);				// legal.
	B b3(10.5);				// legal, but automatically truncates to int
	B b4(2,3);				// illegal: wrong number of parameters
	
	return 0;
}