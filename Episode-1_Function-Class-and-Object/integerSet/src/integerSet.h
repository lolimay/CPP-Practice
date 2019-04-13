#ifndef INTERSET_H
#define INTERSET_H

class IntegerSet {
    public:
        // default constructor: initialize an empty integerSet
        IntegerSet();
        // initialize an integerSet from an array
        IntegerSet(int *intset, int length);
        // insert element into integerSet
        void insertElement(int i);
        // delete element from integerSet
        void deleteElement(int i);
        // union current integerSet with another one
        void unionWith(IntegerSet intset);
        // intersect current integerSet with another one
        void intersectWith(IntegerSet inset);
        // see if there exists the element in current integerSet
        bool exists(int i);
        // see if the current integerSet equals to another one
        bool equals(IntegerSet intset);
        // print the content of the current integerSet
        void print();
        
    private:
        int intSet[101];
};

#endif // !INTERSET_H