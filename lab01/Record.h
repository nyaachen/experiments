#ifndef RECORD_H
#define RECORD_H

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include "CourseInfo.h"

class Database;
class Record {
    friend class Database;
    friend std::ostream &operator<<(std::ostream &os, Record &r);
private:
    std::string StudentID;
    std::string StudentName;
    std::string StudentMajor;
    Course_list StudentCourse;
public:
    explicit Record(const std::string &s);
    ~Record();
    std::string get_ID() const;
    std::string get_Name() const;
    std::string get_Major() const;
    Course_list get_Course() const;
    bool add_course(const std::string &s);
    bool remove_course(const std::string &s);
};

std::ostream &operator<<(std::ostream &os, Record &r);

#endif
