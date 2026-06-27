#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    int divider = 1;

    for(int i = 1; i <= n; i++){
        if(n % i == 0 && m % i == 0){
            divider = i;
        }
    }

    cout << divider;

    return 0;
}