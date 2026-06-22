#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int start, end;
    cin >> start >> end;

    int total = 0;

    for(int i = start; i <= end; i++){
        
        int cnt = 0;
        
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                cnt += 1;
            }
        }

        if(cnt == 3){
            total += 1;
        }
    }

    cout << total;


    return 0;
}