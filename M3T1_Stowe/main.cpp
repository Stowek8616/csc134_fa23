#include <iostream>

using namespace std;

/*
Part 1:
For this assignment you will create a program to match the following specifications.
Ask the user to enter the length and width of two rectangles, then display the area of both.
Part 2: Add Additional Features
Ask the user to enter the length and width of two rectangles, then display the area of both.
Tell the user which rectangle has the larger area, or if they are the same area.
*/

int main()
{
    cout << "Areas of Rectangles\n";

    double length1, length2, width1, width2;

    cout << "Rectangle 1 length?";
    cin >> length1;
    cout << "Rectangle 1 width?";
    cin >> width1;
    cout << "Rectangle 2 length?";
    cin >> length2;
    cout << "Rectangle 2 width?";
    cin >> width2;

    double area1 = length1 * width1;
    double area2 = length2 * width2;

    cout << "Rectangle 1 area is: " << area1 << endl;
    cout << "Rectangle 2 area is: " << area2 << endl;

    if (area1 > area2) {
        cout << "Rectangle 1 is larger." << endl;
    }
    else if (area2 > area1){
        cout << "Rectangle 2 is larger." << endl;
    }
    else {
        cout << "Rectangles are equal size." << endl;
    }
    return 0;
}
