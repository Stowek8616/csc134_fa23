#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double menu_price = 0;
    double tax_percent = 0.07;
    double item_price;
    int num_items;
    string item_name;

    cout << "Welcome to the CSC 134 Grill." << endl;

    cout << "What would you like today? "<< endl;
    cin >> item_name;

    cout << "What's the price on that item? " << endl;
    cin >> item_price;

    cout << "How many " << item_name << " do you want? " << endl;
    cin >> num_items;

    menu_price = num_items * item_price;
    double tax_dollars = menu_price * tax_percent;
    double total_price = menu_price + tax_dollars;
    cout << fixed << setprecision(2);

    cout << "Order: " << num_items << " " << item_name << "(s)" << endl;
    cout << "Menu Price: $" << menu_price << endl;
    cout << "Tax is:     $" << tax_dollars << endl;
    cout << "________________________" << endl;
    cout << "Your Total: $" << total_price << endl;
    cout << "Thank you for Dining with us!" << endl;
    return 0;
}
