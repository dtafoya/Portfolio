#include <iostream>
using namespace std;

int main() {
    string month;
    int day;

    cin >> month >> day;

    if (month == "OCT") {
        if (day == 31) { cout << "yup" << endl; }
        else cout << "nope" << endl;
    }
    else if (month == "DEC") {
        if (day == 25) { cout << "yup" << endl; }
        else cout << "nope" << endl;
    }
    else cout << "nope" << endl;

    return 0;
}