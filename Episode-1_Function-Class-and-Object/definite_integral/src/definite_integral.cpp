#include <iostream>
#include <cmath>
using namespace std;

// return result of 1/sqrt(1-x^2)
long double foo(double x) {
    if((1 - x*x) > 0) {
        return 1/sqrt(1-x*x);
    } else
    {
        return 0;
    }
    
}

// integrate the integral of 1/sqrt(1-x^2)
long double integrate(long double intervalDown, long double intervalUp, long double fineness) {
    long double rectWidth = (intervalUp - intervalDown)/fineness;
    long double x = intervalDown;
    long double area = 0;

    while(x<=intervalUp){
        long double mid = (x*2+rectWidth)/2;
        long double rectHeight = foo(mid);

        area += rectWidth * rectHeight;
        x += rectWidth;
    }
    
    return area;   
}

int main(int argc, char const *argv[])
{
    long double intervalDown, intervalUp, fineness;

    cout<<"Please input integral interval: ";    
    cin>>intervalDown>>intervalUp;

    // legal input check
    while(intervalDown < 0 || intervalUp > 1) {
        cout<<"the input is invalid, please input again: ";
        cin>>intervalDown>>intervalUp;
    }

    cout<<"Please input integral fineness: ";
    cin>>fineness;
    cout<<integrate(intervalDown, intervalUp, fineness)<<endl;
    return 0;
}

