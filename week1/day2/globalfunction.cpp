//create a programe that clearly shows the diffrence between global function and block scope function
#include <iostream>
using namespace std;
int main(){
    int globalVar = 10;
    cout << "Global variable: " << globalVar << endl;

    // Block scope
    {
        int blockVar = 20;
        cout << "Block scope variable: " << blockVar << endl;
    }

    // cout << "Block scope variable: " << blockVar << endl;

    return 0;
}