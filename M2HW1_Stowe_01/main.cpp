#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string name;
    double balance;
    double deposit;
    double withdrawl;

    cout << "What is your first name?" << endl;
    cin >> name;
    cout << "What is your account balance?" << endl;
    cin >> balance;
    cout << "How much are you depositing?" << endl;
    cin >> deposit;
    cout << "How much are you withdrawing?" << endl;
    cin >> withdrawl;

    double finalbalance = balance + deposit - withdrawl;

    cout << name <<"'s Account                                            Account Number: 694834" << endl;
    cout << "Amount deposited: $" << deposit << "      Amount withdrawn: $" << withdrawl << "      Final Balance: $" << finalbalance << endl;
    return 0;
}
