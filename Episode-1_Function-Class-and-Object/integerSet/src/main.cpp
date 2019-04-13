#include <iostream>
#include "integerSet.h"

using namespace std;
int main(int argc, char const *argv[])
{
    int a[9999] = {0,1,1,1,1,1,0,0,0,0,0};
    for(int i=11; i<=123; i++) {
        a[i] = 1;
    }
    IntegerSet int1(a, sizeof(a)/sizeof(*a));
    int1.print();

    IntegerSet int2;
    int2.insertElement(23);
    int2.insertElement(25);
    for(int i=2; i<=10; i++) {
        int2.insertElement(i);
    }
    int2.deleteElement(10);
    int2.print();
    cout<<int2.exists(9);
    cout<<int2.exists(10);
    cout<<int2.equals(int1);
    int2.unionWith(int1);
    int2.print();

    return 0;
}

