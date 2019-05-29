#include "MyTime.h"
#include <iostream>
#include <string>

int MyTime::getHour() {
    return hour;
}

int MyTime::getMinute() {
    return minute;
}

int MyTime::getSecond() {
    return second;
}

void MyTime::setHour(int hour) {
    MyTime::hour = hour;
}

void MyTime::setMinute(int minute) {
    MyTime::minute = minute;
}

void MyTime::setSecond(int second) {
    MyTime::second = second;
}

void MyTime::print() {
    std::cout<<hour<<":";
    if (minute < 10) {
        std::cout<<"0"<<minute;
    } else {
        std::cout<<minute;
    }
    std::cout<<":";
    if (second < 10) {
        std::cout<<"0"<<second;
    } else {
        std::cout<<second;
    }
    
}

bool MyTime::operator> (const MyTime &mt2) const {
    if (hour > mt2.hour) {
        return true;
    }
    if (minute > mt2.minute) {
        return true;
    }
    if (second > mt2.second) {
        return true;
    }

    return false;
}

bool MyTime::operator< (const MyTime &mt2) const {
    if (hour < mt2.hour) {
        return true;
    }
    if (minute < mt2.minute) {
        return true;
    }
    if (second < mt2.second) {
        return true;
    }

    return false;
}

bool MyTime::operator== (const MyTime &mt2) const {
    if (hour == mt2.hour && minute == mt2.minute && second == mt2.second) {
        return true;
    }

    return false;
}
MyTime MyTime::operator+ (const MyTime &mt2) const {
    int totalSecondsA = hour * 3600 + minute * 60 + second;
    int totalSecondsB = mt2.hour * 3600 + mt2.minute * 60 + mt2.second;
    int result = totalSecondsA + totalSecondsB;

    int resultHour = result / 3600;
    int resultMinute = (result % 3600) / 60;
    int resultSecond = result % 3600 % 60;
    return MyTime(resultHour, resultMinute, resultSecond);
}

MyTime MyTime::operator- (const MyTime &mt2) const {
    int totalSecondsA = hour * 3600 + minute * 60 + second;
    int totalSecondsB = mt2.hour * 3600 + mt2.minute * 60 + mt2.second;
    int result = totalSecondsA - totalSecondsB;

    int resultHour = result / 3600;
    int resultMinute = (result % 3600) / 60;
    int resultSecond = result % 3600 % 60;
    return MyTime(resultHour, resultMinute, resultSecond);
}

MyTime& MyTime::operator++ () {
    second++;
    if (second>=60) {
        second-=60;
        minute++;
        if (minute>=60) {
            hour++;
        }
    }

    return * this;
}

MyTime MyTime::operator++ (int) {
    MyTime old = * this;
    ++ (* this);
    return old;
}

MyTime& MyTime::operator-- () {
    second--;
    if (second<0) {
        second+=60;
        minute--;
        if (minute<0) {
            hour--;
            if (hour<0) {
                throw "\n\033[31mInvalid Operation\033[0m";
            }
        }
    }

    return * this;
}

MyTime MyTime::operator-- (int) {
    MyTime old = * this;
    -- (* this);
    return old;
}

MyTime MyTime::operator+= (const int &n) {
    second += n;
    if (second>=60) {
        second-=60;
        minute++;
        if (minute>=60) {
            hour++;
        }
    }

    return * this;
}

MyTime MyTime::operator-= (const int &n) {
    second-=n;
    if (second<0) {
        second+=60;
        minute--;
        if (minute<0) {
            hour--;
            if (hour<0) {
                throw "\n\033[31mInvalid Operation\033[0m";
            }
        }
    }

    return * this;
}