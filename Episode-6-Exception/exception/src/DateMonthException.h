#ifndef DATEMONTHEXCEPTION_H
#define DATEMONTHEXCEPTION_H

#include "DateException.h"

class DateMonthException : public DateException {
    public:
        DateMonthException(int code, string message)
            : DateException(code, message) {};
};

#endif // !DATEMONTHEXCEPTION_H