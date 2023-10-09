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
        cout <<"Day#" << i << " ";
        cin >> todayscars;
        totalcars += todayscars;
    }
    cout << "Total cars seen was: " << totalcars;
    cout << " over " << NUMDAYS << " days" << endl;
    cout << endl;

    cout << "Part 2: Count with while" << endl;
    // TODO ask user car count per day and add
    int i = 0;
    while (i < NUMDAYS) {
        cout << "Day#" << i << endl;
        i++;
    }
}
