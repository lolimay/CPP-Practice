#include "Book.h"
#include "Reader.h"
#include <iostream>

using namespace std;

int Reader::borrow(Book book) {
    if (book.borrowed) {
        cout<<"Sorry, this book is borrowed!"<<endl;
        return 1;
    }

    if (Book::remaining <= 0) {
        cout<<"Sorry, the library is empty."<<endl;
        return 2;
    }

    Book::remaining--;
    Book::borrowings++;
    book.borrowed = true;

    return 0;
}