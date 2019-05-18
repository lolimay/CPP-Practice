#ifndef LEADER_H
#define LEADER_H

#include "Person.h"

class Leader : virtual public Person {
    public:
        Leader(
        string id,
        string name,
        string gender,
        int age,
        string department,
        string duties,
        string lengthOfService
        ) : Person(id, name, gender, age, department),
            duties(duties),
            lengthOfService(lengthOfService) {}

        Leader(string duties,
               string length) : duties(duties),
                                lengthOfService(length) {}

        string getDuties();
        string getLength();

        void setDuties(string duties);
        void setLength(string lengthOfService);

    protected:
        string lengthOfService, duties;
};

#endif // !LEADER_H
