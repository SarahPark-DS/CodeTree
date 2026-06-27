#include <iostream>
using namespace std;

void printRect(int n){
    int cnt = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(cnt > 9){
                cnt = 1;
            }
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    printRect(n);
    return 0;
}