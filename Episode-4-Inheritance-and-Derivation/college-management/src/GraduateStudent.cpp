#include "GraduateStudent.h"

// getters
string GraduateStudent::getMentor() {
    return mentor;
}

string GraduateStudent::getResearch() {
    return research;
}

// setters
void GraduateStudent::setMentor(string mentor) {
    GraduateStudent::mentor = mentor;
}

void GraduateStudent::setResearch(string research) {
    GraduateStudent::research = research;
}
