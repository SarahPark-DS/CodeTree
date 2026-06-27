#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            cout << 0 << " ";
        }
        else{
            int remainder = i % 10;
            int share = i / 10;
            if(remainder != 0 && remainder % 3 == 0){
                cout << 0 << " ";
            }
            else if(share != 0 && share % 3 == 0){
                cout << 0 << " ";
            }
            else{
                cout << i << " ";
            }
        }


    }
    return 0;
}