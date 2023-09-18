#include <iostream>

using namespace std;
/*
CSC 134
M3T2 - Stowe

The player rolls two 6-sided dice (abbreviated 2d6.)
7 or 11 -> instant win
2, 3, or 12 -> instant loss
*/

int main()
{
    cout << "Lets play Craps!" << endl;
    int die1, die2, total;
    // roll 2d6
    cout << "What are the two rolls?" << endl;
    cin >> die1 >> die2;
    total = die1 + die2;
    cout << "You rolled: " << total << endl;
    // do the if else for 7 or 11 and 2,3,12.

    if (total == 7 || total == 11){
        cout << "You win!" << endl;
    }
    else if (total == 2 || total == 3 || total == 12){
        cout << "You lose!" << endl;
    }
    else {
        cout << "You did not win or lose" << endl;
    }
}
