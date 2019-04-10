#include <iostream>
#include "integerSet.h"

IntegerSet::IntegerSet() {
    for(int i=0; i<=101; i++) {
        intSet[i] = 0;
    }
}

IntegerSet::IntegerSet(int *a, int length) {
    std::cout<<length<<std::endl;
}

void IntegerSet::print() {
    for(int i=0; i<=101; i++) {
        std::cout<<"";
    }
}
