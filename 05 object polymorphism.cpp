#include <iostream>
using namespace std;

int main() {
    Rect r1(100, 50, 20, 40); // Rect(x, y, width, height)
    cout << r1.area() << '\n';

    Circle c1(400, 300, 50); // Circle(x, y, radius)
    cout << c1.area() << '\n';

    Line L1(0, 0, 300, 400);
    cout << L1.area() << '\n'; // area should be 0

#if 0
    Shape* shapes[3];
    shapes[0] = &r1;
    shapes[1] = &c1;
    shapes[2] = &L1;

    for (int i = 0; i < 3; i++){

    }

    // also does the same thing:
    for (auto s: shapes)
        cout << s.area() << '\n';

#endif
    return 0;
}