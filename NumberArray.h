#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

#include <iostream>
using namespace std;

class NumberArray {
private:
    static const int MAX_SIZE = 10;
    static const double DEFAULT_RETURN;
    double* numbers;
    int size;

public:
    NumberArray(int size = MAX_SIZE);   // Constructor
    ~NumberArray();                     // Destructor

    void setNumber(int index, double value);
    double getNumber(int index) const;

    double getMax() const;
    double getMin() const;
    double getAverage() const;

    void print() const;
};

#endif
