// ================ Midterm Review pt 3 ================
#include <iostream>
using namespace std;

// to be fast, this code will align objects to be accessible quickly.
// it's slower to read off-alignment
// so, objects of class A won't be 13 bytes, it will be a multiple of 8.

/* memory alignment issues
		 0	 1	 2	 3	 4	 5	 6	 7
	0	[ ]	[ ]	[ ]	[ ]	[ ]	[ ]	[ ]	[ ]
	8	[ ]	[ ]	[ ]	[ ]	[ ]	[ ]	[ ]	[ ]
	16	[ ]	[ ]	[ ]	[ ]	[ ]	[ ]	[ ]	[ ]
	
*/
// sizeof(A) = 32 bytes
class A{
private:
	uint32_t a;		// 4 bytes
	uint8_t b;		// 1 byte
					// 3 bytes of dead space.
	double c;		// 8 bytes
	uint8_t d;		// 1 byte
					// 7 bytes dead space
	double e;		// 8 bytes
public:

};

// sizeof(B) = 24 bytes
class B{
private:			// ORDER MATTERS IN DECLARING!!!
	uint32_t a;		// 4 bytes
	uint8_t b;		// 1 byte
	uint8_t d;		// 1 byte
					// 2 bytes of dead space.
	double c;		// 8 bytes
	double e;		// 8 bytes
	
public:
	
};



int main(){	
	
	
	return 0;
}