#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher : virtual Person {
    public:
    Teacher(
    string id,
    string name,
    string gender,
    int age,
    string department,
    string professionalTitle,
    string research
    ) : Person(id, name, gender, age, department),
        professionalTitle(professionalTitle),
        research(research) {}

    Teacher(string professionalTitle,
            string research) : Person(),
                               professionalTitle(professionalTitle),
                               research(research) {}

    string getProTitle();

    void setProTitle(string title);

    private:
        string professionalTitle, research;
};


#endif // !TEACHER_H
