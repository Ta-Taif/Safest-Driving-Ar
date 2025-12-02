#include <iostream>
#include <iomanip>
using namespace std;
// the numbers

const int MIN_FAHRENHEIT = 0;
const int MAX_FAHRENHEIT = 20;

//math to get Celsius
double getCelsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}


int main() {
    // Print  title
    cout << "fahreheit to celsius convrsion Table" << endl;
    cout << "--------------------------------------" << endl;

    // Print column labels
    cout << setw(12) << "Fahrenheit" << setw(12) << "Celsius" << endl;

    // Loop through Fahrenheit values
    for (int f = MIN_FAHRENHEIT; f <= MAX_FAHRENHEIT; f++) {
        double c = getCelsius(f);
        cout << setw(12) << f << setw(12) << fixed << setprecision(1) << c << endl;
    }

    return 0;
}
