#ifndef COURSES_H
#define COURSES_H

#include <iostream>
#include <string>


class Course {
private:
    std::string course_name;
    std::string department;
    bool timetable[15];
public:
    Course();
    Course(const std::string &s);
    ~Course();

    
};




#endif
