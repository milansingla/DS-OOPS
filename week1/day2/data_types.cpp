//wap that demonstrates all c++ data types and their sizes 1. display size of each data type 2. display size of range of singned and unsigned data types 3. demonstrate type casting between different data types
#include <iostream>
#include <limits>
using namespace std;

int main() {
    // 1. Display size of each data type
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;

    // 2. Display size of range of signed and unsigned data types
    cout << "Range of signed int: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
    cout << "Range of unsigned int: 0 to " << numeric_limits<unsigned int>::max() << endl;

    // 3. Demonstrate type casting between different data types
    float floatNum = 5.5;
    int intNum = static_cast<int>(floatNum);  // float to int
    cout << "Float to int: " << intNum << endl;

    intNum = 10;
    floatNum = static_cast<float>(intNum);  // int to float
    cout << "Int to float: " << floatNum << endl;

    return 0;
}