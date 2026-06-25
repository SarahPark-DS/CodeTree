#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double tocm = 30.48;
    double ft;
    cin >> ft;

    cout << fixed;
    cout.precision(1);

    cout << ft * tocm;
    return 0;
}