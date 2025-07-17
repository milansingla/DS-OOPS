//create a program convert temprature between celsius and fahrenheit, kelvin
#include <iostream>
using namespace std;
int main(){
    float celsius, fahrenheit, kelvin;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    // Convert Celsius to Kelvin
    kelvin = celsius + 273.15;
    cout << "Temperature in Kelvin: " << kelvin << endl;

    return 0;
}