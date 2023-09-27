#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/*
Kyle Stowe
CSC 134
M3HW1
Q4 Math Practice
*/

int main()
{
    int number, number2, sum, answer;
    srand(time(NULL));
    number = (rand() %9);
    number2 = (rand() %9);
    sum = number + number2;
    cout << "What is " << number << " + " << number2 <<"?" << endl;
    cin >> answer;

    if (answer == sum) {
        cout << "Correct. Good job!" << endl;
    }
    else {
        cout << "Wrong, the answer is " << sum << ". Try again." << endl;
    }
}
