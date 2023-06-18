#include <iostream>
#include <cassert>
using namespace std;

double cost;
double new_Price;
bool type;

void calculateDiscount(double &price, double discount, bool discountType)
{
    double discountAmount;

    cout << "Enter the price of the item: ";
    cin >> price;

    cout << "If the discount is in percentage enter [1], if it's in a fixed amount enter [0]: ";
    cin >> discountType;

    cout << "Enter discount amount: ";
    cin >> discountAmount;

    if (discountType)
    {
        discount = price * (discountAmount / 100.0);
    }
    else
    {
        discount = discountAmount;
    }

    assert(discount >= 0.0);

    new_Price = price - discount;

    assert(new_Price > 0.0);
}

int main()
{

    calculateDiscount(cost, new_Price, type);

    cout << "The price of the item with discount is: " << new_Price << endl;

    return 0;
}
