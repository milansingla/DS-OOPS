//wap that 1. declares arrays of diffrent types 2. initializes  arrays in different methods 3. Accesses and modifies the variable 4. calcuate avg and sum of array elements
#include <iostream>
using namespace std;

int main() {
    // 1. Declare arrays of different types
    int intArray[5];
    float floatArray[5];
    char charArray[5];

    // 2. Initialize arrays in different methods

    int intArray2[5] = {1, 2, 3, 4, 5};
    float floatArray2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray2[5] = {'A', 'B', 'C', 'D', 'E'};

    // 3. Access and modify the variables
    intArray[0] = 10;
    floatArray[1] = 20.2;
    charArray[2] = 'Z';

    // 4. Calculate average and sum of array elements
    int intSum = 0;
    float floatSum = 0.0;
    for (int i = 0; i < 5; i++) {
        intSum += intArray[i];
        floatSum += floatArray[i];
    }
    float intAvg = intSum / 5.0;
    float floatAvg = floatSum / 5.0;

    cout << "Integer Array - Sum: " << intSum << ", Average: " << intAvg << endl;
    cout << "Float Array - Sum: " << floatSum << ", Average: " << floatAvg << endl;

    return 0;
}
