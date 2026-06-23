#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int row[n];
        int cnt = 1;
        for(int j = 0; j < n; j++){
            row[j] = cnt;
            cnt++; 
        }

        for(int j = 0; j < n; j++){
            if(i % 2 == 1){
                cout << row[n-j-1];
            }
            else{
                cout << row[j];
            }
        }
        cout << endl;
    }

    return 0;
}