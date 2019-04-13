#ifndef READER_H
#define READER_H

#include "Book.h"

class Reader {
    public:
        // borrow books from the library
        int borrow(Book book);
};

#endif // !READER_H
