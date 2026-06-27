#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    char answer = 'N';
    cin >> n;

    for(int i = 2 ; i <= n-1; i++){
        if(n % i == 0){
            answer = 'C';
            break;
        }
    }

    cout << answer;

    return 0;
}