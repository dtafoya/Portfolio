#include <iostream>
using namespace std;

int main() {
    int x, y, quadrant;

    cin >> x >> y;

    if (x > 0 && y > 0) {
        quadrant = 1;
    }
    else if (x < 0 && y > 0) {
        quadrant = 2;
    }
    else if ( x < 0 && y < 0) {
        quadrant = 3;
    }
    else quadrant = 4;

    cout << quadrant << endl;

    return 0;
}