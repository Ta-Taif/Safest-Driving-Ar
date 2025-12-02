#include <iostream>
#include <iomanip>
using namespace std;
// the numbers

const int MINFA = 0;
const int MAXFA = 20;

//math to get Celsius
double getCelsius(double fahrenheit) {
    int awnser;
    return awnser = (5.0 / 9.0) * (fahrenheit - 32);
}


int main() {
    // Print  title
    cout << "fahreheit to celsius convrsion Table" << endl;
    cout << "--------------------------------------" << endl;

    // Print column labels
    cout << setw(12) << "Fahrenheit" << setw(12) << "Celsius" << endl;

    // Loop through Fahrenheit values
    for (int f = MINFA; f <= MAXFA; f++) {
        double c = getCelsius(f);
        cout << setw(12) << f << setw(12) << fixed << setprecision(1) << c << endl;
    }

    return 0;
}
