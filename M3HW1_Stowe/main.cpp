#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main()
{
    int number, number2;
    srand((unsigned)time(0));
    number = rand() %9;

    srand((unsigned)time(0));
    number2 = rand() %9;

    cout << number << number2 << endl;
    return 0;
}
