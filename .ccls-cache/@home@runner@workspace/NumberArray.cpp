#include "NumberArray.h"
#include <iomanip>

const double NumberArray::DEFAULT_RETURN = -9999.9;

NumberArray::NumberArray(int s) {
    if (s <= 0) s = MAX_SIZE;
    size = s;
    numbers = new double[size];
    for (int i = 0; i < size; i++) {
        numbers[i] = 0.0;
    }
}

NumberArray::~NumberArray() {
    delete[] numbers;
    cout << "Destructor called, memory released.\n";
}

void NumberArray::setNumber(int index, double value) {
    if (index >= 0 && index < size) {
        numbers[index] = value;
    } else {
        cout << "Error: Index " << index << " out of bounds.\n";
    }
}

double NumberArray::getNumber(int index) const {
    if (index >= 0 && index < size) {
        return numbers[index];
    } else {
        cout << "Error: Index " << index << " out of bounds.\n";
        return DEFAULT_RETURN;
    }
}

double NumberArray::getMax() const {
    double max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max)
            max = numbers[i];
    }
    return max;
}

double NumberArray::getMin() const {
    double min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min)
            min = numbers[i];
    }
    return min;
}

double NumberArray::getAverage() const {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += numbers[i];
    }
    return total / size;
}

void NumberArray::print() const {
    for (int i = 0; i < size; i++) {
        cout << fixed << setprecision(1) << numbers[i] << " ";
    }
    cout << endl;
}
