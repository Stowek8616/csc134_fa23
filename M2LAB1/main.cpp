#include <iostream>
#include <iomanip>

/*
M2LAB1 - Crates
CSC 134
Stowe
Find the Volume of a crate of a given size
Find the Cost to make it
Find the price to sell it at
Find the Profit */

using namespace std;

int main()
{
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    double Length;
    double Width;
    double Height;
    double Volume = Length * Width * Height;
    double Cost;
    double Charge;
    double Profit = Charge - Cost;
    return 0;
}
