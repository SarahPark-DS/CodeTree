#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double fttocm = 30.48, mitocm = 160934;
    double ft = 9.2, mile = 1.3;

    cout << fixed;
    cout.precision(1);

    cout << ft << "ft" << " = " << ft * fttocm  << "cm" << endl;
    cout << mile << "mi" << " = " << mile * mitocm << "cm" << endl;
    return 0;
}