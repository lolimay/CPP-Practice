#ifndef DATEYEAREXCEPTION_H
#define DATEYEAREXCEPTION_H

#include "DateException.h"

class DateYearException : public DateException {
    public:
        DateYearException(int code, string message)
            : DateException(code, message) {};
};

#endif // !DATEYEAREXCEPTION_H