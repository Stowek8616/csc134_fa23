#include <iostream>

using namespace std;

int main()
{
    const int MINNUMBER = 1;
    const int MAXNUMBER = 10;

    int num = MINNUMBER;

    cout << "Number Number Squared\n";
    cout << "-------------------------\n";
    while (num <= MAXNUMBER) {
        cout << num << "\t\t" << (num * num) << endl;
        num++;
    }
    return 0;
}
