// ================ Midterm Review pt 2 ================
#include <iostream>
using namespace std;


class A{};			// definition: class A (minimum 1 byte)

class B{
private:
	int x;
public:
	B(int x) x(x){}
	B(): x(-3) {}
	void f(){
		cout << "henlo~\n";
	}
};




int main(){	
	A a1;
	
	B b1;					// this is how to call the constructor with no param's
	B b2(10);				// legal
	B b3();					// legal: someone will write a function b3() that returns B
	b3.f();					// illegal: b3 is not an object!
	
	return 0;
}