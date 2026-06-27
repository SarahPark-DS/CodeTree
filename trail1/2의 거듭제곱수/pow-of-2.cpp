#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int x = 0;
    while(n != 1){
        n /= 2;
        x++;
    }

    cout <<x;



    return 0;
}