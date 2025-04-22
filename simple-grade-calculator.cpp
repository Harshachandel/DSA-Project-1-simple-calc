
// Simple Grade Calculator Using if - else statement  : --

#include <iostream>
using namespace std;

int main() {

    float marks;
    
    // Input the marks
    cout << "Enter your marks (0 - 100): ";
    cin >> marks;

    // Check for valid input
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks. Please enter a value between 0 and 100." << endl;
        return 1;
    }

    // Determine the grade
    char grade;
    if (marks >= 90) {
        grade = 'A';
        cout<<"Excellent Work ! "<<endl;
        cout<<"You are eligible for next class ! "<<endl;

    } else if (marks >= 80) {
        grade = 'B';
        cout<<"Good Job ! "<<endl;
        cout<<"You are eligible for next class ! "<<endl;

    } else if (marks >= 70) {
        grade = 'C';
        cout<<"Great ! "<<endl;
        cout<<"You are eligible for next class ! "<<endl;

    } else if (marks >= 60) {
        grade = 'D';
        cout<<"Good Work ! "<<endl;
        cout<<"You are eligible for next class ! "<<endl;
    } else if (marks >= 50) {
        grade = 'E';
        cout<<"You pass ! "<<endl;
        cout<<"You are eligible for next class ! "<<endl;
    } else {
        grade = 'F';
        cout<<"Needs Improvement ! "<<endl;
        cout<<"You are eligible not for next class ! "<<endl;
    }

    // Output the result
    cout << "You got grade: " << grade << endl;

    return 0;
}
