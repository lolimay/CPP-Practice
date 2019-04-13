#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
    public:
        Book(string name) : name(name), borrowed(false) {
            total++;
            remaining++;
        };
        // show total collection records, remaining collections and total borrowings
        void display();
        // borrow books
        friend class Reader;
    private:
        static int total, remaining, borrowings;
        string name; // the book name
        bool borrowed;
};

#endif // !BOOK_H
