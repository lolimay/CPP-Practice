#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <stdlib.h>

using namespace std;

class Circle
{
private:
    double x, y, r;
public:
    Circle(double x, double y, double r) : x(x), y(y), r(r) {
        if (r<=0) {
            cout<<"\033[31m[Error]\033[0m illegal radius "<<r<<"! Please input a positive radius."<<endl;
            exit(1);
        }
    };
    // calculate distance between two points
    friend double distance(Circle c1, Circle c2);
    // determine the position relationship between two circle.
    friend int relation(Circle c1, Circle c2);
};

#endif // !CIRCLE_H

