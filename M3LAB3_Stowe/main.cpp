#include <iostream>

using namespace std;

int main()
{
    const int A_GRADE = 90;
    const int B_GRADE = 80;
    const int C_GRADE = 70;
    const int D_GRADE = 60;
    cout << "Number Grade to Letter Grade" << endl;
    int num_grade;
    string letter_grade = "NO GRADE";

    cout << "What is the number grade: ";
    cin >> num_grade;

    if (num_grade >= A_GRADE) {
        letter_grade = "an A";
    }
    else if (num_grade >= B_GRADE) {
        letter_grade = "a B";
    }
    else if (num_grade >= C_GRADE) {
        letter_grade = "a C";
    }
    else if (num_grade >= D_GRADE) {
        letter_grade = "a D";
    }
    else if (num_grade < 60) {
        letter_grade = "an F";
    }
    cout << "A grade of " << num_grade;
    cout << " is " << letter_grade << endl;
}
