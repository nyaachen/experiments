#include "CourseInfo.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>


std::string get_time(size_t t) {
    std::string temp1, temp2;
    switch (t/3) {
        case 0: temp1="星期一";break;
        case 1: temp1="星期二";break;
        case 2: temp1="星期三";break;
        case 3: temp1="星期四";break;
        case 4: temp1="星期五";break;
    }
    switch (t%3) {
        case 0: temp2="上午12节";break;
        case 1: temp2="上午34节";break;
        case 2: temp2="下午12节";break;
    }
    return temp1+temp2;
}

Course_info::Course_info() : Name(), timetable({false}) {}
explicit Course_info::Course_info(const std::string &s) : Course_info() {
    std::istringstream is(s);
    is >> Name;
    size_t temp;
    while (is >> temp) {
        timetable[temp] = true;
    }
}
~Course_info::Course_info() {}
Course_info::Course_info(const Course_info &s) : Course_info() {
    Name = s.Name;
    for (size_t i=0; i != 15; ++i) {
        timetable[i] = s.timetable[i];
    }
}
Course_info &Course_info::operator=(const Course_info &s){
    Name = s.Name;
    for (size_t i=0; i != 15; ++i) {
        timetable[i] = s.timetable[i];
    }
}
std::string Course_info::get_Name() const {
    return Name;
}
bool Course_info::conflict(const Course_info &s) const {
    for (size_t i=0; i != 15; ++i) {
        if (timetable[i] == s.timetable[i])
            return true;
    }
    return false;
}


std::ostream &operator<<(std::ostream &os, const Course_info &s) {
    os << s.Name;
    for (size_t i=0; i != 15; ++i) {
        if (s.timetable[i] == true) {
            os << get_time(i) << std::endl;
        }
    }
    return os;
}



Course_list::Course_list() {}
~Course_list::Course_list() {}
bool Course_list::add_course(const std::string &s) {
    for (const std::string &a : Courses) {
        if (a == s) return false;
    }
    Courses.push_back(s);
    return true;
}
bool Course_list::remove_course(const std::string &s) {
    auto iter = Courses.begin();
    while (iter != Courses.end()) {
        if (*iter != s) ++iter;
        else {
            Courses.erase(iter);
            return true;
        }
    }
    return false;
}
bool Course_list::count() const {
    return Courses.size();
}


std::ostream &operator<<(std::ostream &os, const Course_list &s) {
    for (const std::string &c : s.Courses) {
        os << c << " ";
    }
    return os;
}



void CourseTable::add_course(const Course_info &c) {
    for (size_t i=0; i != 15; ++i) {
        if (c.timetable[i] == true) {
            list[i] = c.Name;
        }
    }
}

std::ostream &operator<<(std::ostream &os, const CourseTable &s) {
    for (size_t i=0; i != 15; ++i) {
        if (!list[i].empty()) {
            os << get_time(i) << list[i] << std::endl;
        }
    }
    return os;
}
