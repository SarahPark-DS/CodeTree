#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    int answer = 0;

    for(int i = m; i <= n * m; i++){
        if(i % n == 0 && i % m == 0){
            answer = i;
            break;
        }
    }

    cout << answer;


    return 0;
}