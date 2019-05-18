#include "Person.h"

// getters
string Person::getId() {
    return id;
}

string Person::getName() {
    return name;
}

string Person::getGender() {
    return gender;
}

int Person::getAge() {
    return age;
}

string Person::getDepartment() {
    return department;
}

// setters
void Person::setId(string _id) {
    id = _id;
}

void Person::setName(string _name) {
    name = _name;
}

void Person::setGender(string _gender) {
    gender = _gender;
}

void Person::setAge(int _age) {
    age = _age;
}

void Person::setDepartment(string _department) {
    department = _department;
}