#include "Book.h"
#include <iostream>

using namespace std;

void Book::display() {
    cout<<"total: "<<total<<" remaining: "<<remaining<<" borrowings: "<<borrowings<<endl;
}