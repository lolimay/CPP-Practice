#ifndef TEACHERLEADER_H
#define TEACHERLEADER_H

#include "Teacher.h"
#include "Leader.h"

class TeacherLeader : public Teacher, public Leader {
    public:
    TeacherLeader(
    string id,
    string name,
    string gender,
    int age,
    string department,
    string duties,
    string lengthOfService,
    string professionalTitle,
    string research
    ) : Person(id, name, gender, age, department),
        Teacher(lengthOfService, professionalTitle),
        Leader(duties, lengthOfService) {}
};

#endif // !TEACHERLEADER_H