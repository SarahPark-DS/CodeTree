#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int array[n][n];

    for(int i = 0; i < n; i++){
        
        int cnt = 1;

        if(i % 2 != 0){
            for(int j = n - 1; j >= 0; j--){
                array[j][i] = cnt;
                cnt++;
            }
        }
        else{
            for(int j = 0; j < n; j++){
                array[j][i] = cnt;
                cnt++;
            }
        }
    }

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            cout << array[i][j];
        }
        cout << endl;
    }
    return 0;
}