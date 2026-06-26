#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b, c;
    cin >> a >> b >> c;

    int min = 0;

    if(a >= b){
        if(c >= a){
            min = b;
        }
        else{
            if(b >= c){
                min = c;
            }
            else{
                min = b;
            }
        }
    }
    else{
        if(c >= b){
            min = a;
        }
        else{
            if(c <= b){
                if(a >= c){
                    min = c;
                }
                else{
                    min = a;
                }
            }
        }
    }

    cout << (min == a) << " " << (a == b && b == c);




    return 0;
}