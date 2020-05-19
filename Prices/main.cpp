#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float price1;
    float price2;
    float price3;
    float total;

    cout << "enter a price" << endl;
    cin >> price1;

    cout << "enter a price" << endl;
    cin >> price2;

    cout << "enter a price" << endl;
    cin >> price3;

    cout << "Price 1 is" << endl;
    cout << "Price 2 is" << endl;
    cout << "Price 3 is" << endl;

    cout << setiosflags(ios::fixed);
    cout << setprecision(2);

    total = price1 + price2 + price3;
    cout << "Total price: " << total << setprecision(2) << endl;

    cout << price1 << endl;
    cout << price2 << endl;
    cout << price3 << endl;
    return 0;
}
