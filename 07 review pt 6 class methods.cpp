// ================ Midterm Review pt 6 ================
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Complex {
private:
	double r, i;
public:
	Complex(double r = 0, double i = 0): r(r), i(i){}
	
	// friend operators
	// friend op's don't point to "this". that's why in the parameters, we have a and b.
	friend Complex operator + (const Complex& a, const Complex& b) {
		return Complex(a.r + b.r, a.i + b.i);
	}
	
	friend Complex operator +(const Compex&a){
		return Complex (-a.r, -a.i);
	}
	
	// non-friends
	Complex operator + (Complex b) const {	// "const" needed. if not, it means we can change c1, which is a const.
		return Complex(r + b.r, i + b.i);	// Complex b is a copy of c2. So, it doesn't need a const
	}
	
	Complex operator - () const {
		return Complex(-r, -i);
	}
	
	// memorize for midterm
	friend ostream& operator << (ostream& s, Complex c) {
		return s << "(" << c.r << ", " << c.i << ")";
	}
};

int main(){
	const Complex c1(1.5, -2.0);
	const Complex c2;
	const Complex c3 = c1 + c2;
	const Complex c4 = -c1;
	cout << c3;
	
	return 0;
}
