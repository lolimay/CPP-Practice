#include "Leader.h"

// getters

string Leader::getDuties() {
    return duties;
}

string Leader::getLength() {
    return lengthOfService;
}

// setters

void Leader::setDuties(string duties) {
    Leader::duties = duties;
}

void Leader::setLength(string length) {
    Leader::lengthOfService = length;
}