#include "Book.h"
#include "Reader.h"
#include <iostream>

int Book::total = 0;
int Book::remaining = 0;
int Book::borrowings = 0;

using namespace std;

int main()
{
	Book* b1 = new Book("Understanding ECMAScript 6");
    b1->display();
	Book* b2 = new Book("You don't know JavaScript");
	b2->display();
	Reader r = Reader("Mike");
	r.borrow(b1);
	b1->display();
    r.borrow(b1);
	b1->display();
	r.borrow(b2);
	b1->display();
}

