//create a program that checks if number is 1. even or odd 2. positive, negative, zero 3. sigle digit, double digit or more
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(num%2==0){
        cout << "number is " << "even"<< endl;
    }
    else{
        cout << "number is "<< "odd"<< endl;
    }
    if(num>0){
        cout << "number is " << "positive"<< endl;
    }
    else if(num<0){
        cout << "number is " << "negative"<<endl;
    }
    else{
        cout << "number is " << "zero"<<endl;
    }
    if(num>=0 && num<10){
        cout << "number is " << "single digit"<<endl;
    }
    else if(num>=10 && num<100){
        cout << "number is " << "double digit"<<endl;
    }
    else{
        cout << "number is " << "more than two digits" <<endl;
    }
    return 0;
}