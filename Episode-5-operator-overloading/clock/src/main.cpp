#include <iostream>
#include <string>
#include "MyTime.h"

using namespace std;

int main(int argc, char const *argv[])
{
    MyTime t1(1,1,1), t2(12,12,12), t3(59,59,59);
    int INTERVAL = 30;

    t1.print(); cout<<" + "; t2.print(); cout<<" = "; (t1+t2).print(); cout<<endl;
    t1.print(); cout<<" + "; t3.print(); cout<<" = "; (t1+t3).print(); cout<<endl;
    t2.print(); cout<<" + "; t3.print(); cout<<" = "; (t2+t3).print(); cout<<endl;

    try {
        t1.print(); cout<<" - "; t2.print(); cout<<" = "; (t1-t2).print(); cout<<endl;
    } catch (const char* msg) {
        cout<<msg<<endl;
    }
    try {
        t1.print(); cout<<" - "; t3.print(); cout<<" = "; (t1-t3).print(); cout<<endl;
    } catch (const char* msg) {
        cout<<msg<<endl;
    }
    try {
        t3.print(); cout<<" - "; t2.print(); cout<<" = "; (t3-t2).print(); cout<<endl;
    } catch (const char* msg) {
        cout<<msg<<endl;
    }
    
    t1.print(); cout<<" == "; t1.print(); cout<<" "<<(t1 == t1 ? "true" : "false")<<endl;
    t1.print(); cout<<" == "; t2.print(); cout<<" "<<(t1 == t2 ? "true" : "false")<<endl;
    t2.print(); cout<<" == "; t3.print(); cout<<" "<<(t2 == t3 ? "true" : "false")<<endl;

    t1.print(); cout<<" > "; t1.print(); cout<<" "<<(t1 > t1 ? "true" : "false")<<endl;
    t1.print(); cout<<" > "; t2.print(); cout<<" "<<(t1 > t2 ? "true" : "false")<<endl;
    t3.print(); cout<<" > "; t2.print(); cout<<" "<<(t3 > t2 ? "true" : "false")<<endl;

    t1.print(); cout<<" < "; t1.print(); cout<<" "<<(t1 < t1 ? "true" : "false")<<endl;
    t1.print(); cout<<" < "; t2.print(); cout<<" "<<(t1 < t2 ? "true" : "false")<<endl;
    t3.print(); cout<<" < "; t2.print(); cout<<" "<<(t3 < t2 ? "true" : "false")<<endl;

    cout<<"++"; t1.print(); cout<<" = "; (++t1).print(); cout<<endl;
    cout<<"--"; t1.print(); cout<<" = "; (--t1).print(); cout<<endl;
    t1.print(); cout<<"++ = "; (t1++).print(); cout<<endl;
    t1.print(); cout<<"-- = "; (t1--).print(); cout<<endl;

    t1.print(); cout<<" += "<<INTERVAL<<" = "; (t1+=INTERVAL).print(); cout<<endl;
    t1.print(); cout<<" += "<<INTERVAL/2<<" = "; (t1+=INTERVAL/2).print(); cout<<endl;
    t1.print(); cout<<" += "<<INTERVAL*2<<" = "; (t1+=INTERVAL*2).print(); cout<<endl;
    
    t1.print(); cout<<" -= "<<INTERVAL<<" = "; (t1-=INTERVAL).print(); cout<<endl;
    t1.print(); cout<<" -= "<<INTERVAL/2<<" = "; (t1-=INTERVAL/2).print(); cout<<endl;
    t1.print(); cout<<" -= "<<INTERVAL*2<<" = "; (t1-=INTERVAL*2).print(); cout<<endl;

    return 0;
}

