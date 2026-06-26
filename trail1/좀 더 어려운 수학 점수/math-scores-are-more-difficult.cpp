#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a[2], b[2];
    char student ;

    for(int i = 0; i < 2; i++){
        cin >> a[i];
    }

    for(int i = 0; i < 2; i++){
        cin >> b[i];
    }

    if(a[0] == b[0]){
        if(a[1] > b[1]){
            student = 'A';
        }else{
            student = 'B';
        }
    }
    else if(a[0] > b[0]){
        student = 'A';
    }
    else{
        student = 'B';
    }

    cout << student;

    return 0;
}