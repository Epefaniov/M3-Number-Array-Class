#include <iostream>
#include <random>
#include <ctime>
#include "NumberArray.h"

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    cout << "Testing default constructor:\n";
    NumberArray arr1;
    arr1.print();

    cout << "\nTesting constructor with custom size 5:\n";
    NumberArray arr2(5);

    // Fill with random values
    for (int i = 0; i < 5; i++) {
        double val = (rand() % 1000) / 10.0; // values from 0.0 to 99.9
        arr2.setNumber(i, val);
    }

    arr2.print();

    cout << "Max: " << arr2.getMax() << endl;
    cout << "Min: " << arr2.getMin() << endl;
    cout << "Average: " << arr2.getAverage() << endl;

    // Invalid index tests
    cout << "\nTesting out-of-bounds access:\n";
    arr2.setNumber(-1, 50);
    arr2.setNumber(10, 100);
    cout << "Get from invalid index: " << arr2.getNumber(20) << endl;

    return 0;
}
