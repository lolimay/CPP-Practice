#include <iostream>
#include <string>
#include "DateException.h"
#include "DateYearException.h"
#include "DateMonthException.h"
#include "DateDayException.h"

using namespace std;

int monthMaxValue[] = {0,
    31, 28, 31, 30, 31,
    30, 31, 31, 30, 31,
    30, 31
};

bool isLeapYear(int year) {
    int isLeap;
    if (year%400 == 0)
        isLeap = true;
    else {
        if (year%4 == 0 && year%100 != 0) {
            isLeap = true;
        } else {
            isLeap = false;
        }
    }

    return isLeap;
}

bool validateTime(int year, int month, int day) {
    if (isLeapYear(year)) {
        monthMaxValue[2] = 29;
    }

    if (year < 0) {
        DateYearException dateYearException(100, "The year cannot be below zero!");
        throw dateYearException;
    }

    if (month < 1 || month > 12) {
        DateMonthException dateMonthException(200, "The month is out of range!");
        throw dateMonthException;
    }

    if (day < 1) {
        DateDayException dateDayException(300, "The day cannot be below one!");
        throw dateDayException;
    }

    if (day > monthMaxValue[month]) {
        DateDayException dateDayException(301, "The day is out of range!");
        throw dateDayException;
    }

    monthMaxValue[2] = 28;
    return true;
}

void testTime(int year, int month, int day) {
    try {
        cout<<"\033[34mTesting: \033[0m"<<" "<<year<<":"<<month<<":"<<day;
        validateTime(year, month, day);
        cout<<" \033[33mSuccess\033[0m"<<endl;
    } catch (DateYearException exception) {
        cout<<endl<<"\033[31mDateYearException: \033[0m"<<" "<<exception.getMessage()<<" ("<<exception.getCode()<<")"<<endl;
    } catch (DateMonthException exception) {
        cout<<endl<<"\033[31mDateMonthException: \033[0m"<<" "<<exception.getMessage()<<" ("<<exception.getCode()<<")"<<endl;
    } catch (DateDayException exception) {
        cout<<endl<<"\033[31mDateDayException: \033[0m"<<" "<<exception.getMessage()<<" ("<<exception.getCode()<<")"<<endl;
    }
}

int main(int argc, char const *argv[])
{
    testTime(-9, 1, 1);
    testTime(0, 1, 1);
    testTime(1, 1, 1);

    testTime(2010, -9, 28);
    testTime(2010, 13, 28);
    testTime(2010, 12, 28);

    testTime(2001, 2, 29);
    testTime(2000, 2, 29);
    testTime(2000, 5, -1);
    return 0;
}

