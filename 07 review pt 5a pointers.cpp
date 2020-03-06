// ================ Midterm Review pt 5a ================
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class A{
	public:
	void f() { cout << "yo!"; }
};

int main(){
	
	A a1;
	A a2();			// a2 is a function that returns an object A
	A* p;
	const A* q;		// q is a pointer of object A, which is a constant. So, this is read only.
	A* const r;		// r is a constant pointer to A
					// ILLEGAL: r cannot change, therefore it must be initialized
	a1.f();		
	p = &a1;
	p->f();			// (*p).f
	q->f();			// ILLEGAL: q is read only, so it can't touch the object it's pointing to to call an obj. method
	a2.f();			// ILLEGAL: a2 is a function, not an object
	
	return 0;
}

// You can declare a pointer to an abstract class-type
