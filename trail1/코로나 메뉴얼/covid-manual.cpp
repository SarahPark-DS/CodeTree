#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 3;
    char symp[n];
    int temp[n];

    for(int i = 0; i < n; i++){
        cin >> symp[i] >> temp[i];
    }

    int cnt = 0;

    for(int i = 0; i < n ; i++){
        if(symp[i] == 'Y' && temp[i] >= 37){
            cnt += 1;
        }
    }

    if(cnt >= 2){
        cout << "E" << endl;
    }
    else{
        cout << "N" << endl;
    }



    return 0;
}