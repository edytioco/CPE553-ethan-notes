// ================ Midterm Review pt 7b ================
#include <iostream>
#include <string>
using namespace std;

// ======== When inheritance doesn't make sense ========
class Airplane{
public:
	void fly();
};

class Pilot{		// pilot is NOT an airplane. it doesn't make sense, even if they both have void fly()
private:
	Airplane* controlling;
public:
	void fly(){
		if (controlling != nullptr)
			controlling->fly();
	}
};


/*
	Person name
	Heart bpm, systolic, diastolic
	Kidney, %working (0-100)
*/

// doesn't extend Kidney nor Heart. ie, you don't say, "A person is a kidney", or "A person is a heart"
// BUT, we say, "A person HAS a kidney," and, "A person HAS a heart."
//
// only C++ can a class inherit from multiple classes, but watch out for collisions!
class Person: public Heart, public Kidney{
private:
	Kidney k1, k2;
	Heart h;
	
public:
	
};






