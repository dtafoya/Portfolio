#include <iostream>
using namespace std;

int main() {
    int days, temp, tempsBelowZero = 0;

    cin >> days;

    for (int i = 0; i < days; i++) {
        cin >> temp;

        if (temp < 0) { tempsBelowZero++; }
    }

    cout << tempsBelowZero << endl;

    return 0;
}