#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#incldue <vector>
#include "boolarray.h"

class Department : protected BoolArray{
//  static objects for class Department
public:
    static std::vector<std::string> Department_name;
    static size_t Department_cnt;
    static get_department_name(const Department &dep);
// common methods for class Department
public:
    Department(size_t cnt_, unsigned int *data);
    friend std::ostream &operator<<(std::ostream &os, const Department &dep);
    friend std::istream &operator>>(std::istream &is, Department &dep);
};

std::ostream &operator<<(std::ostream &os, const Department &dep);
std::istream &operator>>(std::istream &is, Department &dep);

#endif
