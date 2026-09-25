#include <iostream>
using namespace std;
int main() {
    string name;
    int test_scores;

    cout << "input student name: ";
    cin >> name;
    cout << "input test scores: ";
    cin >> test_scores;

    cout << "student name: " << name << std::endl;
    cout << "test scores: " << test_scores << std::endl;

    if (test_scores > 100) {
        cout << "invalid score";
    }
    else if (test_scores > 90) {
        cout << "grade A";
    }
    else if (test_scores > 80) {
        cout << "grade B";
    }
    else if (test_scores > 70) {
        cout << "grade C";
    }
    else if (test_scores > 1) {
        cout << "grade D";
    } 
    else {
        cout << "invalid scores";
    }
    
 }