#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int classroom = 0, hallway = 0, bathroom = 0;

    for(int i = 1; i <= n; i++){
        if(i % 12 == 0){
            bathroom++;
        }
        else if(i % 3 == 0){
            hallway++;
        }
        else if(i % 2 == 0){
            classroom++;
        }
        else{
            continue;
        }
    }

    cout << classroom << " " << hallway << " " << bathroom;

    return 0;
}