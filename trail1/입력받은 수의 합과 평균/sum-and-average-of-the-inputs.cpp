#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << fixed;
    cout.precision(1);

    int total = 0;
    for(int i = 0; i < n; i++){
        total += arr[i];
    }

    cout << total << " " << (double)total / n;


    return 0;
}