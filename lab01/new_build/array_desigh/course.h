#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "boolarray.h"
#include "timetable.h"

class Course : protected BoolArray{
//  static data info for class Course
//  TODO : another class for course basic info; this class 
public:
    std::vector<std::string> CourseName;
    std::vector<Timetable> CourseTime;
//  methods for class Course
private:
}
