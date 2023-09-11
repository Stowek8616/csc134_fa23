#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Recipt Calculator" << endl;
    double menu_price = 5.99;
    double tax_percent = 0.07;
    double tax_dollars = menu_price * tax_percent;
    double total_price = menu_price + tax_dollars;

    cout << fixed << setprecision(2);

    cout << "Thank you for Dining with us!" << endl;
    cout << "Your meal is $" << menu_price << endl;
    cout << "Your Tax is $" << tax_dollars << endl;
    cout << "Your Total is $" << total_price << endl;
    return 0;
}
