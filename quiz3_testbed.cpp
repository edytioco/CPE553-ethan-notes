// author: Ethan DyTioco
// test bed for in class Quiz #3

#include <iostream>
using namespace std;

class Vec3D{
private:
	double x,y,z;
public:
	Vec3D(double x, double y, double z): x(x), y(y), z(z){}
	
	// addition functions
	
	// ======== A Note for Non-Member Functions ========
	// non-member function (ie, friend) can't have const after parameters,
	// so instead, it has const declared inside the parameters if they're passed by reference.
	//if the parameters are copies (ie, not passed by reference), then you can probably get away with not using const
	
	
	friend Vec3D operator + (const Vec3D a, const Vec3D b); // defined after the class
	
	// this block-commented out + op works 
	// Vec3D operator + (const Vec3D &b){...} does NOT work. const must be outside,
	// because the object referencing this operator (Vec3D a, in this program)is also const.
	/*
	Vec3D operator + (const Vec3D& b) const{
	    return Vec3D(x + b.x, y + b.y, z + b.z);
	}
	*/
	Vec3D add(Vec3D b) const {
	    return Vec3D(x + b.x, y + b.y, z + b.z);
	}
	
	Vec3D operator -() const{
		return Vec3D(-x, -y, -z);
	}
	
	double dot (Vec3D b) const{
		return (this->x*b.x) + (y*b.y) + (z*b.z);
	}
	
	friend ostream& operator << (ostream& s, Vec3D a){
		return s << "(" << a.x << ", " << a.y << ", " << a.z << ")";
	}
};

// this is an acceptable way of writing a friend function
// it was declared as a friend in the class, and then defined here
Vec3D operator + (const Vec3D a, const Vec3D b){ 
	return Vec3D(a.x + b.x, a.y + b.y, a.z + b.z);
}


// 3B functions
void f(int &x){
	cout << x;
	x++;
}

void g(int x){
	cout << x;
	x++;
}

// 3A functions
void f2(int x){
	cout << x;
	x++;
}

void g2(int& x){
	cout << x;
	x++;
}
void vectors(){
	cout << "======== Vec3D ========\n";
	const Vec3D a(1.0, 1.5, 2.0);
	const Vec3D b(1.5, 3.0, -2.0);
	const Vec3D c = a + b;
	const Vec3D d = -a;
	const Vec3D e = a.add(b);
	double dot = a.dot(b);
	cout << "a.dot(b) = " << dot << endl;
	cout << a << ' ' << b << "\n\n\n";
}
int main(){
	vectors();
	
	
	cout << "======== 3B ========\n";
	cout << "for loop of f(i):\n";
	for (int i = 1; i <= 10; i++)
		f(i);
	cout << endl;
	cout << "for loop of g(i):\n";
	for (int i = 1; i <= 10; i++)
		g(i);
	cout << endl;
	double x = 3/2 + 4/2 + 5/2 + 6/2;
	cout << "x = " << x << "\n\n";
	
	int a = 3, b = 2;
	cout << a/b << b/a << a*b/b << a/b*b << '\n';
	cout << a%2*(a+1)%2*(a+2)%2 << '\n';
	b += a++;
	cout << a << b << '\n';
	
	
	
	
	
	
	
	cout << "\n\n\n";
	cout << "======== 3A ========\n";
	cout << "for loop of f(i):\n";
	for (int i = 0; i < 10; i++)
		f2(i);
	cout << endl;
	cout << "for loop of g(i):\n";
	for (int i = 0; i < 10; i++)
		g2(i);
	cout << endl;
	double x2 = 1/2 + 2/2 + 3/2 + 4/2;
	cout << "x2 = " << x2 << "\n\n";
	
	int a2 = 2, b2 = 3;
	cout << a2/b2 << b2/a2 << a2*b2/b2 << a2/b2*b2 << '\n';
	cout << a2%2 * (a2+1)%2 * (a2+2)%2 << '\n';
	b2 += a2++;
	cout << a2 << b2 << '\n';
	
	
	return 0;
}