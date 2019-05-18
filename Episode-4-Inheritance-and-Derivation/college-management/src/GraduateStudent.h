#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H

#include "Student.h"

class GraduateStudent : public Student {
    public:
        GraduateStudent(
        string id,
        string name,
        string gender,
        int age,
        string department,
        string major,
        string mentor,
        string research
        ) : Person(id, name, gender, age, department),
            Student(major),
            research(research) {}
        
        string getMentor();
        string getResearch();

        void setMentor(string mentor);
        void setResearch(string research);

    private:
        string mentor, research;
};

#endif // !GRADUATESTUDENT_H