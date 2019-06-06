#ifndef DATEEXCEPTION_H
#define DATEEXCEPTION_H

#include <iostream>
#include <string>

using namespace std;

class DateException {
    public:
        DateException(int code, string message) :
            code(code), message(message) {};

        int getCode();
        string getMessage();
    protected:
        int code;
        string message;
};

#endif // !DATEEXCEPTION_H