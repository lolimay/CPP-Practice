#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
    public:
        Person() {}

        Person(
        string id,
        string name,
        string gender,
        int age,
        string department
        ) : id(id), 
            name(name),
            gender(gender),
            age(age),
            department(department) {}

        string getId();
        string getName();
        string getGender();
        int getAge();
        string getDepartment();

        ~Person() {}

        void setId(string id);
        void setName(string name);
        void setGender(string gender);
        void setAge(int age);
        void setDepartment(string department);

    protected:
        string id, name, gender, department;
        int age;
};

#endif // !PERSON_H
