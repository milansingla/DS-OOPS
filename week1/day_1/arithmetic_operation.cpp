//create a program that perform basic arithmetic operations on two numbers entered by the user
#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "enter first number: ";
    cin >> num1;
    cout << "enter second number: ";
    cin >> num2;

    cout << "Sum: " << num1 + num2 << endl;
    cout << "diffrence: " << num1 - num2 << endl;
    cout << "product: " << num1 * num2 << endl;
    cout << "divide: " << num1 / num2 << endl;

    return 0;
    
}