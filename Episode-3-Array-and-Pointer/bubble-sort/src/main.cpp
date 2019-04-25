#include <iostream>
#include <cmath>

using namespace std;

// bubble sort
// true: ascending
// false: descending 
void bubbleSort(int *a, int len, bool type=true) {
    int temp;
    for (int i=0; i<len-1; i++) {
        for (int j=0; j<len-1-i; j++) {
            if ( (a[j] > a[j+1]) && type) {
                // exchange values of a[j+1] and a[j+1]
                temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;
            }

            if( (a[j] < a[j+1]) && !type) {
                temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[10];
    bool type = true;

    // input
    cout<<"Please input the 10 values: ";
    for(int i=0; i<10; i++) {
        cin>>a[i];
    }
    cout<<"Please determine the sort type: (1 = ascending, 0 = descending): ";
    cin>>type;
    bubbleSort(a, 10, type);

    for(int i=0; i<10; i++) {
        cout<<a[i]<<" "<<endl;
    }
    return 0;
}

