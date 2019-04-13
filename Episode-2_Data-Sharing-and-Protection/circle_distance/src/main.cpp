#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std;

// return true if the two numbers are approximately equal
bool aequal(double x, double y) {
    if(abs(x - y) <= 0.0001) {
        return true;
    } else {
        return false;
    }
}

// calculate distance between two points
double distance(Circle c1, Circle c2) {
    double x1 = c1.x, y1 = c1.y;
    double x2 = c2.x, y2 = c2.y;
    double result = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

    if (result > 0) {
        return sqrt(result);
    } else {
        return 0;
    }
}

// determine the position relationship between two circle.
int relation(Circle c1, Circle c2) {
    double dc = distance(c1, c2);
    double R = c1.r;
    double r = c2.r;

    if (dc > R+r) {
        cout<<"The two circles are \033[32maway\033[0m."<<endl;
        return 4; // two circles away
    } else if (aequal(dc, R+r)) {
        cout<<"The two circles are \033[32mcircumscribed\033[0m."<<endl;
        return 3; // the two circles are circumscribed
    } else if (dc > abs(R-r) && dc < R+r) {
        cout<<"The two circles are \033[32mintersect\033[0m."<<endl;
        return 2; // the two circles intersect
    } else if (aequal(dc, abs(R-r))) {
        cout<<"The two circles are \033[32minscribed\033[0m."<<endl;
        return 1; // two circles inscribed
    } else {
        cout<<"One circle is by \033[32mcontained\033[0m another one."<<endl;
        return 0; // one circle is contained by another one
    }
}


int main(int argc, char const *argv[])
{
    double x1, x2, y1, y2, r1, r2;

    cout<<"Please input the first circle's parameters: ";
    cin>>x1>>y1>>r1;
    cout<<"Please input the second circle's parameters: ";
    cin>>x2>>y2>>r2;

    Circle c1(x1, y1, r1), c2(x2, y2, r2);
    relation(c1, c2);
    return 0;
}
