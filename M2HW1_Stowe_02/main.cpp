#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
    double length, width, height;
    double volume;
    double cost, charge, profit;

    // Get the Dimensions
    cout << "Enter the Length, Width, and Height in feet. Press ENTER after each value inputted." << endl;
    cin >> length >> width >> height;

    // Calculate the Cost
    volume = length * width * height;

    //Find the Cost and Price for that volume
    cost = COST_PER_CUBIC_FOOT * volume;
    charge = CHARGE_PER_CUBIC_FOOT * volume;

    //Find the profit
    profit = charge - cost;

    //Output the answer
    cout << "The crate is: " << volume << " cubic ft." << endl;
    cout << "The cost to manufacture is: $" << cost << endl;
    cout << "The charge to customer is:  $" << charge << endl;
    cout << "The profit is:              $" << profit << endl;

    return 0;
}
