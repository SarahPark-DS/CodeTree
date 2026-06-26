#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m;
    cin >> m;

    if(m == 2){
        cout << 28;
    }
    else{
        if((m <= 7 && m % 2 == 1) || (m >= 8 && m % 2 == 0)){
            cout << 31;
        }
        else{
            cout << 30;
        }
    }

    return 0;
}