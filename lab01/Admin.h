#ifndef ADMIN_H
#define ADMIN_H

#include "database.h"

class Admin() {
    Database &db;
public:
    Admin(Database &db_) : db(db_) {};
}
