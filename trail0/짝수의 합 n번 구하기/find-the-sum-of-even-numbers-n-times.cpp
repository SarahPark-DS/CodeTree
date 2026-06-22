#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;

    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }

    int sum[n] = {0};

    for(int i = 0; i < n; i++){
        for(int j = a[i] ; j <= b[i]; j++){
            if(j % 2 == 0){
                sum[i] += j;
            }
        }
    }

    for(int i = 0; i < n ; i++){
        cout << sum[i] << endl;
    }

    return 0;
}