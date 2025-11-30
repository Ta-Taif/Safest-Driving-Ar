#include <iostream>
#include <string>
using namespace std;

void getRegInfo(string& regionName, int& accidents) {
    cout << "Enter region name: ";
    cin >> regionName;

    cout << "Enter number of accidents in " << regionName << ": ";
    cin >> accidents;

    while (accidents < 0) {
        cout << "NO NEGETIVES: ";
        cin >> accidents;
    }
}



void showLowest(string regionName, int accidents) {
    cout << "\nThe safest driving region is " << regionName
        << " with " << accidents << " accidents last year." << endl;
}


int main() {
    string regionName, lowestRegion;
    int accidents, lowestAccidents;

    getRegInfo(regionName, accidents);
    lowestRegion = regionName;
    lowestAccidents = accidents;

    for (int i = 0; i < 4; i++) {
        getRegInfo(regionName, accidents);

        if (accidents < lowestAccidents) {
            lowestAccidents = accidents;   
            lowestRegion = regionName;     
        }
    }

    showLowest(lowestRegion, lowestAccidents);

    return 0;
}
