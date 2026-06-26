#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    int max = 0;

    if(a >= b && a >= c){
        max = a;
    }
    else if(b >= a && b >= c){
        max = b;
    }
    else{
        max = c;
    }

    cout << max;


    return 0;
}