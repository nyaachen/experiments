#ifndef MANAGER_H
#define MANAGER_H

#include "database.h"
#include "Admin.h"
#include "Student.h"

class Manager {
private:
    Database db;
public:
    Manager() : db() {}
    ~Manager() {}
    Admin admin_login() {
        return Admin(db);
    }
    Student student_login(const std::string &id) {
        auto iter = db.data_set.begin();
        while (iter != db.data_set.end()) {
            if (*iter.get_ID() == s)
                return Student(*iter);
        }
        return Student();
    }
    
}
