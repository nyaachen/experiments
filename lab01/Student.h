#ifndef STUDENT_H
#define STUDENT_H

#include "database.h"

class Student() {
private:
    Record *r;
public:
    Student() : r(nullptr) {}
    Student(Record &r_) : r(&r_) {}
}
