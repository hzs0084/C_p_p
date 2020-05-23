#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c;
    float x1, x2;

    cout << "enter the value for a" << endl;
    cin >> a;

    cout << "enter the value for b" << endl;
    cin >> b;

    cout << "enter the value for c" << endl;
    cin >> c;

    x1 = (- b + sqrt(((b *b) - (4 * a * c)))) / (2 * a);
    x2 = (- b - sqrt(((b *b) - (4 * a * c)))) / (2 * a);

    cout << "This quadratic has the following roots: X = " << x1 << endl;
    cout << "X = " << x2 << endl;
}
