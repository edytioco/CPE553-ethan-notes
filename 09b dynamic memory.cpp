// dynamic memory allocation


void f(){
	int x = 2;
	int* p = new int[10];	// when the function ends, the pointer dies
							// but the int[10] remains because it's not deleted
							// this is memory leak
							// call this function enough times and you'll crash :)
}

#include <iostream>
using namespace std;

int main(){
	int a;		// not dynamic. allocates 4 bytes.
	int x[10];	// allocates 40 bytes
	int n;
	cin >> n;
	// int y[n];
	int *y = new int[n];	// allocate memory on the heap
	
	f();
	
	delete [] y;			// you're responsible to delete things with "new"
	
	// int *p = new int [256ULL*1024*1024*1024];
	// I can ask for 256 GB of RAM
	// but the OS gets nervous when I do this lol
	
	// ================ RULES ================
	// these errors happen at run-time.
	// use pointers only when you have to
	
	int a;			// not dynamic
	int* q = &a;
	delete q;		// ERROR: you can only  delete memory that was allocated with "new"
	
	int *b = new int;
	delete b;
	delete b;		// deleting twice will crash!
	
	int* c = new int[10];
	c++;
	delete [] c;	// ERROR: you can only delete the pointer that you're given. you can't change c.
	
	return 0;
}