#ifndef EXPRESSION_BASE_H
#define EXPRESSION_BASE_H

// Expression类是一个虚基类
class Expression_base {
public:
    Expression_base() = default;
    virtual ~Expression_base() = default;
    virtual Expression_base &plus(const Expression_base &r) = 0;
    virtual Expression_base &minus(const Expression_base &r) = 0;
    virtual Expression_base &multi(const Expression_base &r) = 0;
    virtual Expression_base &divide(const Expression_base &r) = 0;
    virtual Expression_base &bit_or(const Expression_base &r) = 0;
    // 用于输出的虚接口
    virtual std::ostream &print(std::ostream &os) const = 0;
};

#endif
