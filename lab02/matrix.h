#ifndef MATRIX_H
#define MATRIX_H


class Vector {
private:
    double *p;
    size_t cnt;
public:
    Vector(); // 空的向量
    explicit Vector(int size, int default_value = 0); // 显式的定义向量的长度和默认值
    Vector(const std::initializer_list<double> &l); // 初始化列表支持
    ~Vector(); // 析构函数负责释放空间

    // 复制构造函数
    Vector(const Vector &v);
    Vector &operator=(const Vector &v);
    // 移动构造函数
    Vector(Vector &&v);
    Vector &operator=(Vector &&v);

    // 下标访问运算符
    double operator[](size_t pos) const;
    double &operator[](size_t pos);

    // 返回数组大小
    size_t size() const;

    // 数学上两个相同长度的向量相加,相减，内积（ABT/ATB）
    friend Vector operator+(const Vector &a, const Vector &b);
    friend Vector operator-(const Vector &a, const Vector &b);
    double operator*(const Vector &v) const;
    // ||a|| 欧几里得长度
    double euclid_length() const;
};

class Matrix {
private:
public:
    Matrix(); // 默认构造函数
    // 显式指定矩阵的大小
     
}
