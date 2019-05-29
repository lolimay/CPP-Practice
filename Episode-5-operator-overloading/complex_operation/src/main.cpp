#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;

string printComplex(Complex c) {
    auto real = to_string(c.getReal());
    auto image = to_string(c.getImage());

    return "(" + real + "," + image + ")";
}

int main(int argc, char const *argv[])
{
    Complex c1(1, 1), c2(2, 3), c3(0, 0);

    cout<<printComplex(c1)<<"+"<<printComplex(c2)<<"="<<printComplex(c1+c2)<<endl;
    cout<<printComplex(c1)<<"+"<<printComplex(c3)<<"="<<printComplex(c1+c3)<<endl;
    cout<<printComplex(c2)<<"+"<<printComplex(c3)<<"="<<printComplex(c2+c3)<<endl<<endl;

    cout<<printComplex(c1)<<"-"<<printComplex(c2)<<"="<<printComplex(c1-c2)<<endl;
    cout<<printComplex(c1)<<"-"<<printComplex(c3)<<"="<<printComplex(c1-c3)<<endl;
    cout<<printComplex(c2)<<"-"<<printComplex(c3)<<"="<<printComplex(c2-c3)<<endl<<endl;

    cout<<printComplex(c1)<<"*"<<printComplex(c2)<<"="<<printComplex(c1*c2)<<endl;
    cout<<printComplex(c1)<<"*"<<printComplex(c3)<<"="<<printComplex(c1*c3)<<endl;
    cout<<printComplex(c2)<<"*"<<printComplex(c3)<<"="<<printComplex(c2*c3)<<endl<<endl;

    cout<<printComplex(c1)<<"/"<<printComplex(c2)<<"="<<printComplex(c1/c2)<<endl;
    cout<<printComplex(c3)<<"/"<<printComplex(c2)<<"="<<printComplex(c3/c2)<<endl;
    try {
        cout<<printComplex(c2)<<"/"<<printComplex(c3)<<"="<<printComplex(c2/c3)<<endl;
    } catch (const char* error) {
        cout<<error<<endl;
    }
    return 0;
}

