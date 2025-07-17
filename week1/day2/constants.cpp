//wap that demonstrates diffrent ways to use constants in C++ 1. const variable 2. #define directive 3. show diffrence between const and #define
#include <iostream>
using namespace std;
int main() {
    // 1. Using const variable
    const float PI = 3.14159;
    cout << "Value of PI using const variable: " << PI << endl;

    // 2. Using #define directive
    #define E 2.71828
    cout << "Value of E using #define directive: " << E << endl;

    // 3. Show difference between const and #define
    const int CONST_VAR = 10;
    #define DIRECTIVE_VAR 20
    cout << "Value of CONST_VAR: " << CONST_VAR << endl;
    cout << "Value of DIRECTIVE_VAR: " << DIRECTIVE_VAR << endl;

    return 0;
}