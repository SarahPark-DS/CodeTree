#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n = -1;
    
    while(n != 25){
        cin >> n;
        if(n < 25){
            cout << "Higher" << endl;
        }
        else if(n > 25){
            cout << "Lower" << endl;
        }
        else{
            cout << "Good" << endl;
        }

    }

    return 0;
}