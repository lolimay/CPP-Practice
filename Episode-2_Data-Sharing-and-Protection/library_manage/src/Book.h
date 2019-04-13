#ifndef BOOK_H
#define BOOK_H

class Book {
    public:
        Book() : borrowed(false) {
            total++;
            remaining++;
        };
        // show total collection records, remaining collections and total borrowings
        void display();
        // borrow books
        friend class Reader;
    private:
        static int total, remaining, borrowings;
        bool borrowed;
};

#endif // !BOOK_H
