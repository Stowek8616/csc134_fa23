#include <iostream>

using namespace std;

int main()
{
    cout << "Receipt Calculator" << endl;
    double menu_price = 5.99;
    double tax_percent = 0.07 // cumberland county tax
    double tax_dollars = menu_price * tax_percent ;
    double total_price = menu_price +tax_dollars;

    cout << fixed << endl
    return 0;
}
