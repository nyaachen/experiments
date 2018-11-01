#ifndef BOOLARRAY_H
#define BOOLARRAY_H

#include <iostream>

class BoolArray {
protected:
    size_t cnt;
    unsigned int *ptr;
public:
    BoolArray();
    BoolArray(size_t cnt_, unsigned int *data);
    virtual ~BoolArray();
    BoolArray(const BoolArray &arr);
    BoolArray &operator=(const BoolArray &arr);
    BoolArray(BoolArray &&arr);
    BoolArray &operator=(BoolArray &&arr);

    friend std::ostream &operator<<(std::ostream &os, const BoolArray &arr);
    friend std::istream &operator>>(std::isteram &is, BoolArray &arr);

    bool operator[](size_t pos) const;
    bool set(size_t pos, bool value);
    bool set_length(size_t new_size);
    bool extend();
};

std::ostream &operator<<(std::ostream &os, const BoolArray &arr);
std::istream &operator>>(std::isteram &is, BoolArray &arr);

#endif
