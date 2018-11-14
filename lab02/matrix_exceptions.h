#ifndef MATRIX_EXCEPTIONS_H
#define MATRIX_EXCEPTIONS_H

#include <string>
#include <stdexcept>

// 矩阵操作出错类
class Matrix_error: public std::runtime_error {
public:
    Matrix_error(const std::string &s) : runtime_error(s) {}
};

class Matrix_Unable_to_multiply : public Matrix_error {

};

class Matrix_Unable_to_add_or_sub {}

class Matrix_Unable_to_reverse {}

// 表达式错误
class Expression_error : public std::runtime_error {
public:
    Expression_error(const std::string &s) : runtime_error(s) {}
};

class Variable_not_found : public Expression_error {

}

class Unexcepted_symbol : public Expression_error {

}

class Embracelet_not_match : public Expression_error {

}
