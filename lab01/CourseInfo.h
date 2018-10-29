#ifndef COURSEINFO
#define COURSEINFO

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <array>

class Database;
class CourseTable;
class Course_info {
    friend class Database;
    friend class CourseTable;
    friend std::ostream &operator<<(std::ostream &os, const Course_info &s);
private:
    std::string Name;
    bool timetable[15];
public:
    Course_info();
    explicit Course_info(const std::string &s);
    ~Course_info();
    Course_info(const Course_info &s);
    Course_info &operator=(const Course_info &s);

    std::string get_Name() const;
    bool conflict(const Course_info &s) const;
};

std::ostream &operator<<(std::ostream &os, const Course_info &s);


class Course_list {
    friend std::ostream &operator<<(std::ostream &os, const Course_list &s);
private:
    std::vector<std::string> Courses;
public:
    Course_list();
    ~Course_list();
    bool add_course(const std::string &s);
    bool remove_course(const std::string &s);
    bool count() const;
};

std::ostream &operator<<(std::ostream &os, const Course_list &s);

class CourseTable {
    friend std::ostream &operator<<(std::ostream &os, const CourseTable &s);
private:
    std::array<std::string, 15> list;
public:
    CourseTable() = default;
    ~CourseTable() = default;

    void add_course(const Course_info &c);
};

std::ostream &operator<<(std::ostream &os, const CourseTable &s);

#endif
