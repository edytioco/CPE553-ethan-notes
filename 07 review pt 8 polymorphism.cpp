// ================ Midterm Review pt 8 ================
#include <iostream>
#include <string>
using namespace std;

// Polymorphism is when you send the same message to different objects,
// and at compile time it figures out what to call

class Vehice{					// C++, we call this "Base Class"
private:
	int speed;
public:
	Vehicle(int s): speed(s){}
	
	virtual int payToll() = 0;	// virtual function >> abstract class.
								// if you forget to define the virtual function, you're also an abstract class!

								// if you're a car, you'll call the car version of this.
								// if you're a bus, you'll call the bus version of this.
								// if you're a truck, you'll call the truck version of this.
};

class Car: public Vehicle{		// C++, we call this "Derived Class"
private:
	string color;
public:
	// strings are 32 bytes. a pointer is 8 bytes. So, it's more efficient to pass string by reference
	// instead of making a copy of the string
	Car(int s, const string& color): Vehicle(s), color(color){}
	
	int payToll(){
		return 15;
	}
};

class Sportscar: public Car{
private:
	int hp;
public:
	Sportscar(int s, const string& color, int hp): Car(s, color), hp(hp) {}
	
	// If you want to do the same payToll as Car, then don't write it. Your parent has one
	// BUT, if you DO want a different payToll for the Sportscar, then write it.
};

class Bus: public Vehicle{		// C++, we call this "Derived Class"
private:
	int numPassengers;
public:
	Bus(int s, int numPassengers): Vehicle(s), numPassengers(numPassengers){}
	
	int payToll(){
		return 4;
	}
};

class Truck: public Vehicle{	// C++, we call is "Derived Class"
private:
	int axels;
	double weight;
public:
	Truck(int s, int axels, double weight): Vehicle(s), axels(axels), weight(weight){}
	
	int payToll(){
		return 20 * axels;
	}
};


int main(){
	// they all share speed.
	// they all have to pay a toll
	Car c(55, "red");
	Bus b(40, 28);
	Truck t(77, 5, 18000);
	Sportscar s(90, "red", 450);
	
	cout << c.payToll();			// $15
	cout << endl << b.payToll();	// $4, because we want to encourage bus usage to lower traffic
	cout << endl << t.payToll();	// $20 * n. axles
	
	// rule for an array: every element has to be the same size
	// luckily for us, pointers are the same size
	Vehicle* vehicles[4];
	vehicles[0] = &c;
	vehicles[1] = &b;
	vehicles[2] = &t;
	vehicles[3] = &s;
	
	for (int i = 0; i < 4; i++){
		cout << vehicles[i]->payToll() << endl; // polymorphism! poly, meaning "many"; morphism, meaning "shapes" (hello chubbyemu)
	}
	
	return 0;
}