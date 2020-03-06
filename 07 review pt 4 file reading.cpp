// ================ Midterm Review pt 4 ================
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void alt(){
	ifstream f("test2.dat");
	char buf[4096];
	while(!f.eof()){
		f.getline(buf, sizeof(buf));
		istringstream linestr(buf);
		linestr >> name >> mass >> dist;
	}
}

int main(){
	ofstream f("test.stl");
	f << "hello" << 5 << '\n';
	
	ifstream in("solarsystem.dat");
	// sun 1e30 x 0.0
	string name;
	double mass;
	
	
	return 0;
}

// another way to do it: reading line by line
#if 0
int main(){
	string line;
	ifstream f("test.dat");
	string name;
	double mass;
	double dist;
	while (!f.eof()){					// reads one line at a time
		istringstream linestr(line);
		linestr >> name >> mass >> dist;
	}
	
	// a faster way to do it.
	alt();
	return 0;
}
#endif