//wap that takes marks of 5 subjects and calculates  the total, average & grade based on average: 90-100(A), 80-89(B), 70-79(C), 60-69(D), below 60(F);
#include <iostream>
using namespace std;
int main(){
    int sub1, sub2, sub3, sub4, sub5;
    cout << "Enter marks of subject1: " << endl;
    cin >> sub1;

    cout << "Enter marks of subject2: " << endl;
    cin >> sub2;

    cout << "Enter marks of subject3: " << endl;
    cin >> sub3;

    cout << "Enter marks of subject4: " << endl;
    cin >> sub4;

    cout << "Enter marks of subject5: " << endl;
    cin >> sub5;

    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    float average = total / 5.0;

    char grade;
    if (average >= 90 && average <= 100) {
        grade = 'A';
    } else if (average >= 80 && average < 90) {
        grade = 'B';
    } else if (average >= 70 && average < 80) {
        grade = 'C';
    } else if (average >= 60 && average < 70) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}