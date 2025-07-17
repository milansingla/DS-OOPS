//create aprogram that shows the deffrent ways to initialize variables in C++ 1. copy initialization 2. direct initialization 3. uniform initialization 4. defalult initialization
#include <iostream>
using namespace std;
int main() {

    int a = 5; // Copy initialization
    cout << "Copy Initialization: " << a << endl;

    int b(10); // Direct initialization
    cout << "Direct Initialization: " << b << endl;


    int c{15}; // Uniform initialization
    cout << "Uniform Initialization: " << c << endl;

    
    int d; // Default initialization
    cout << "Default Initialization: " << d << endl;

    return 0;
}