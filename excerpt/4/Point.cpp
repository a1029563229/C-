//
// Created by Macxdouble on 2020/1/2.
//

#include "Point.h"
#include "iostream"
using namespace std;
class Point {
private:
    int a, b;
public:
    Point();
    Point(int, int);
};

Point::Point(): a(1), b(1) {
    cout << "Constructor of Point" << endl;
}

Point::Point(int m, int n): a(m), b(n) {
    cout << "Constructor of Point with 2 parameters" << a << "," << b << endl;
}

//int main() {
//    Point p1;
//    Point p2(10, 20);
//    Point p3[2];
//    Point p4[2] = { Point(2,3), Point(4,5) };
//    return 0;
//}