// ================ Midterm Review pt 7 ================
#include <iostream>
#include <string>
using namespace std;


class Wheel{
private:
	int pressure;
public:
	Wheel (int p): pressure(p){}
};

class Engine{
private:
	int hp;
public:
	Engine(int hp): hp(hp){}
};

class Vehicle{
private:
	int speed;
public:
	Vehicle (int speed): speed(speed){}
};

// Inheritance
// 1. Car IS a vehicle. You can't say, "a car is an engine".
// 2. A car is exactly one vehicle 1:1
// 3. A car will always be a vehicle
class Car: public Vehicle {
private:
	Engine e;
	Wheel w1, w2, w3, w4;
public:
	// the order of initialization is based on the order in which the variables are declared in private
	Car(int speed, int hp, int press): Vehicle(speed), e(hp), w1(press), w2(press), w2(press), w4(press){}
	
};

int main(){
	Car c(55, 480, 30);
	cout << sizeof(c) << endl;
	
	return 0;
}
