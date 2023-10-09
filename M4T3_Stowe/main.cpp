#include <iostream>
using namespace std;

/*
CSC 134
M4T3 - Three Loops
Stowe
10/9/23
*/
int main()
{
    const int NUMDAYS = 5;
    int todayscars;
    int totalcars = 0;
    cout << "Part 1: Counting Loop" << endl;
    cout << "How many cars did you see each day?" << endl;
    for (int i=0; i < NUMDAYS; i++) {
        cout <<"Day#" << i << ": ";
        cin >> todayscars;
        totalcars += todayscars;
    }
    cout << "Total cars seen was: " << totalcars;
    cout << " over " << NUMDAYS << " days" << endl;
    double average = (double) totalcars / NUMDAYS;
    cout << "Average per day = " << average;
    cout << endl;

    cout << "Part 2: Count with while" << endl;
    totalcars =0;
    int i = 0;
    while (i < NUMDAYS) {
        cout <<"Day#" << i << ": ";
        cin >> todayscars;
        totalcars += todayscars;
        i += 1;
    }
    cout << "Total cars seen was: " << totalcars;
    cout << " over " << NUMDAYS << " days" << endl;
    average = (double) totalcars / NUMDAYS;
    cout << "Average per day = " << average;
    cout << endl;

    // Part 3
    cout << "Enter how many cars you saw per day." << endl;
    cout << "or -1 to finish." << endl;
    bool keepgoing = true;
    int day = 0;
    totalcars = 0;
    while (keepgoing) {
        day = day + 1;
        cout << "Day# " << day << ": ";
        cin >> todayscars;
        if (todayscars == -1) {
            cout << "OK, Done" << endl;
            keepgoing = false;
        } else {
          totalcars += todayscars;
        }
    }
    cout << "Total = " << totalcars << " cars" << endl;
    average = (double) totalcars / day;
    cout << "Average per day = " << average << endl;
    cout << endl;
}
