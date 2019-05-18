#ifndef STUDENTLEADER_H
#define STUDENTLEADER_H

#include "Student.h"
#include "Leader.h"

class StudentLeader : public Student, public Leader {
    public:
    StudentLeader(
    string id,
    string name,
    string gender,
    int age,
    string department,
    string major,
    string duties,
    string lengthOfService
    ) : Person(id, name, gender, age, department),
        Student(major),
        Leader(duties, lengthOfService) {}
};

#endif // !STUDENTLEADER_H
