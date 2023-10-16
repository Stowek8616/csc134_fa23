/*
CSC 134
Kyle Stowe
M4HW1
Times tables from 1-12
*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2, answer;
    num1 = 0;
    num2 = 1;
    cout << "Enter a number between 1 and 12" << endl;
    cin >> num1;

while (num1 <= 0 || num1 > 12) {
    cout << "Enter a valid number" << endl;
    cin >> num1;
}

while (num2 <= 12) {
    answer = num1 * num2;
    cout << num1 << " * " << num2 << " = " << answer << endl;
    num2 = num2 + 1;
}
}
