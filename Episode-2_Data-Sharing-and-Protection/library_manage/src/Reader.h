#ifndef READER_H
#define READER_H

#include "Book.h"
#include <string>

using namespace std;

class Reader {
    public:
        // constructor
        Reader(string name) : name(name) {};
        // borrow books from the library
        int borrow(Book* book);
    private:
        string name;
};

#endif // !READER_H
