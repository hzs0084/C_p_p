#include <iostream>

using namespace std;

int main()
{
    const int MINUTES_PER_HOUR = 60;
    int numHours = 10;
    int minu;

    minu = numHours * MINUTES_PER_HOUR;

    //MINUTES_PER_HOUR++;
    numHours++;

    unsigned int zeroHour = 0;
    zeroHour--;

    cout << "1 hour before zero hour is " << zeroHour << endl;

    cout << "There are " << minu << " minutes in " << numHours << " hours" << endl;
    return 0;
}
