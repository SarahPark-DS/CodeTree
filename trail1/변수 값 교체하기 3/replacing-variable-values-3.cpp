#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 3, b = 5, temp;

    temp = a;
    a = b;
    b = temp;

    cout << a << endl;
    cout << b << endl;
    return 0;
}