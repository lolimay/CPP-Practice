#include <iostream>
#include "integerSet.h"

using namespace std;

// default constructor: initialize an empty integerSet
IntegerSet::IntegerSet() {
    for(int i=0; i<=101; i++) {
        intSet[i] = 0;
    }
}

// initialize an integerSet from an array
IntegerSet::IntegerSet(int *a, int length) {
    // Only the first 100 elements are taken
    // if array's length is greater than 100.
    if(length > 100) length = 100;

    for(int i=1; i<=length; i++) {
        if(a[i] == 1) {
            intSet[i] = 1;
        }
    }

    if(length < 100) {
        // the remaining elements will set 0 by default.
        for(int i = length+1; i<=100; i++) {
            intSet[i] = 0;
        }
    }
}

// insert element into integerSet
void IntegerSet::insertElement(int i) {
    intSet[i] = 1;
}

// delete element from integerSet
void IntegerSet::deleteElement(int i) {
    intSet[i] = 0;
}

// union current integerSet with another one
void IntegerSet::unionWith(IntegerSet intset) {
    for(int i=1; i<=100; i++) {
        if(intset.exists(i)) {
            intSet[i] = 1;
        }
    }
}

// intersect current integerSet with another one
void IntegerSet::intersectWith(IntegerSet intset) {
    for(int i=1; i<=100; i++) {
        if(intset.exists(i) && intSet[i] == 1) {
            intSet[i] = 1;
        } else {
            intSet[i] = 0;
        }
        
    }
}

// see if there exists the element in current integerSet
bool IntegerSet::exists(int i) {
    if(intSet[i] == 1) {
        return true;
    } else
    {
        return false;
    }
    
}

// see if the current integerSet equals to another one
bool IntegerSet::equals(IntegerSet intset) {
    for(int i=1; i<=100; i++) {
        if(!(intset.exists(i) && intSet[i] == 1)) {
            return false;
        }
    }
    return true;
}

// print the content of the current integerSet
void IntegerSet::print() {
    cout<<endl;
    for(int i=0; i<10; i++) {
        for(int j=1; j<=10; j++) {
            cout<<intSet[10*i+j]<<" ";
        }
        cout<<endl;
    }
}
