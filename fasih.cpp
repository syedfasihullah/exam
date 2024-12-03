#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double num = 3.14159;

    cout << "Default: " << num << endl;
    cout << "2 decimal places: " << fixed << setprecision(2) << num << endl;

    return 0;
}

