#ifndef DATEDAYEXCEPTION_H
#define DATEDAYEXCEPTION_H

#include "DateException.h"

class DateDayException : public DateException {
    public:
        DateDayException(int code, string message)
            : DateException(code, message) {};
};

#endif // !DATEDAYEXCEPTION_H