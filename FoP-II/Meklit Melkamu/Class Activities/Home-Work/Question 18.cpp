#include <iostream>
#include <cassert>
using namespace std;

double originalPrice;
double discountAmount;
double discountedPrice;
bool isPercentageDiscount;

void calculateDiscount(double &price, double &discount, bool &isPercentage)
{
    cout << "Enter the original price of the item: ";
    cin >> price;

    cout << "Is the discount a percentage (enter 1) or a fixed amount (enter 0)? ";
    cin >> isPercentage;

    if (isPercentage)
    {
        cout << "Enter the percentage discount: ";
        cin >> discount;
        discount = price * (discount / 100.0);
    }
    else
    {
        cout << "Enter the fixed discount amount: ";
        cin >> discount;
    }

    assert(discount >= 0.0);

    discountedPrice = price - discount;

    assert(discountedPrice > 0.0);
}

int main()
{
    calculateDiscount(originalPrice, discountAmount, isPercentageDiscount);

    cout << "The price of the item with discount is: " << discountedPrice << endl;

    return 0;
}
