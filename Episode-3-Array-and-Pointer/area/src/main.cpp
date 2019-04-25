#include <iostream>
#include <cmath>

using namespace std;

// calculate area
double area(double x, double y, double (*area_func)(double x, double y)) {
    return (*area_func)(x, y);
}

double triangleArea(double l, double h) {
    return (l * h)/2;
}

double squareArea(double a, double b) {
    return a*b;
}


int main(int argc, char const *argv[])
{
    double x, y;
    cin>>x>>y;
    cout<<area(x, y, triangleArea)<<endl<<area(x, y, squareArea)<<endl;
    return 0;
}

