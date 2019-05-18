#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : virtual public Person {
    public:
        Student(
        string id,
        string name,
        string gender,
        int age,
        string department,
        string major
        ) : Person(id, name, gender, age, department),
            stuMajor(major) {}

        Student(string major) : stuMajor(major) {}

        string getMajor();

        void setMarjor(string major);
    private:
        string stuMajor;
};

#endif // !STUDENT_H