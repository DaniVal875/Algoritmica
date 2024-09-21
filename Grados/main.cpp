#include <iostream>

using namespace std;

int main()
{
    float celsius, farenheit;

    cout<<"Grados Celcius: ";
    cin>> celsius;

    farenheit = (celsius *9 / 5) + 32;
    cout <<celsius<<"°C son " << farenheit<< "°F" << endl;
    return 0;
}