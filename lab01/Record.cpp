#include "Record.h"
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include "CourseInfo.h"


explicit Record::Record(const std::string &s) {
    std::istringstream is(s);
    is >> StudentID >> StudentName >> StudentMajor;
    std::string temp;
    while (is >> temp) {
        Course_list.add_course(temp); // CHANGE
    }
}
~Record::Record() {}
std::string Record::get_ID() const {
    return StudentID;
}
std::string Record::get_Name() const {
    return StudentName;
}
std::string Record::get_Major() const {
    return StudentMajor;
}
Course_list Record::get_Course() const {    // CHANGE
    return StudentCourse;
}
bool Record::add_course(const std::string &s) {
    return StudentCourse.add_course(s);
}
bool Record::remove_course(const std::string &s) {
    return StudentCourse.remove_course(s);
}


std::ostream &operator<<(std::ostream &os, Record &r) {
    os << r.StudentID << " " << r.StudentName << " "
        <<  r.StudentMajor << " " << r.StudentCourse;
    return os;
}
