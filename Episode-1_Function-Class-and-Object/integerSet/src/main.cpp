#include "integerSet.h"

int main(int argc, char const *argv[])
{
    int a[23];
    IntegerSet intset(a, sizeof(a)/sizeof(*a));

    return 0;
}