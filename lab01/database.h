#ifndef DATABASE_H
#define DATABASE_H

#include "Record.h"
#include "CourseInfo.h"
#include <vector>
#include <fstream>

#define DATABASE_FILE "database.txt"
#define COURSE_FILE "courses.txt"

class Manager;
class Database {
    friend class Manager;
private:
    std::vector<Record> data_set;
    std::vector<Course_info> classes;
    void read() {
        data_set.clear();
        classes.clear();
        std::ifstream is1(DATABASE_FILE);
        std::string temp;
        while (is1 >> temp) {
            data_set.emplace_back(temp);
        }
        is1.close();

        std::ifstream is2(COURSE_FILE);
        while (is2 >> temp) {
            classes.emplace_back(temp);
        }
        is2.close();
    }
    void sync() {
        std::ofstream os1(DATABASE_FILE);
        for (const auto &data: data_set) {
            os1 << data << std::endl;
        }
        os1.close();

        std::ofstream os2(COURSE_FILE);
        for (const auto &data: classes) {
            os2 << data << std::endl;
        }
        os2.close();
    }
    Record &find_record(const std::string &s) {
        auto iter = data_set.begin();
        while (iter != data_set.end()) {
            if (*iter.get_ID() == s)
                return *iter;
        }
        throw "Record not found";
    }
    Course_info &find_course(const std::string &s) {
        auto iter = classes.begin();
        throw "Course not found";
    }
public:
    Database() {
        read();
    }
    ~Database() {
        sync();
    }
    Database(const Database &s) = delete;
    Database &operator=(const Database &s) = delete;

    void add_course(const Course_info &s) {
        classes.emplace_back(s);
    }
    bool remove_course(const std::string &s) {
        auto iter = classes.begin();
        while (iter != classes.end()) {
            if (*iter.get_Name() == s) {
                classes.erase(iter);
                for (Record &r: data_set) {
                    r.remove_course(s);
                }
            }
        }
        return false;
    }
    CourseTable view_course(const std::string &StudentID, const std::string &CourseName) {
        CourseTable temp;
        Record &ref = find_record(StudentID);
        auto r = ref.get_Course();
        for (auto s : r) {
            temp.add_course(find_course(s));
        }
        return temp;
    }
    bool select_course(const std::string &StudentID, const std::string &CourseName);
    bool remove_course(const std::string &StudentID, const std::string &CourseName);

};

#endif
