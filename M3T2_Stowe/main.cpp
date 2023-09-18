#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*
CSC 134
M3T2 - Stowe

The player rolls two 6-sided dice (abbreviated 2d6.)
7 or 11 -> instant win
2, 3, or 12 -> instant loss
*/
int roll() {
    int roll = rand() %6 + 1;
    return roll;
}
int main()
{
    cout << "Lets play Craps!" << endl;
    int die1, die2, total;

    // roll 2d6

    int seed = time(0);
    cout << "Today's lucky number is: " << seed << endl;
    srand(seed);
    die1 = roll();
    die2 = roll();
    total = die1 + die2;

    cout << "You rolled: ";
    cout << die1 << " + " << die2;
    cout << " = " << total << endl;
    // do the if else for 7 or 11 and 2,3,12.

    if (total == 7 || total == 11){
        cout << "You win!" << endl;
    }
    else if (total == 2 || total == 3 || total == 12){
        cout << "You lose!" << endl;
    }
    else {
        cout << "You did not win or lose." << endl;
    }
}
