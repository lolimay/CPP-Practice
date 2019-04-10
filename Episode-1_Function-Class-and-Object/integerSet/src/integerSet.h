#ifndef INTERSET_H
#define INTERSET_H

class IntegerSet {
    public:
        IntegerSet();
        IntegerSet(int *intset, int intsetLen);
        void insertElement(int i);
        void deleteElement(int i);
        void unionWith(IntegerSet intset);
        bool exists(int i);
        bool equals(IntegerSet intset);
        void print();

    private:
        int intSet[101];
};

#endif // !INTERSET_H