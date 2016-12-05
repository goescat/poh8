#include <iostream>

using namespace std;
int main(void){
    int s,t;
    cin >> s;
    cin >> t;

    for(int i=0; i<(t-1); i++){
        cout << "-";
    }

    cout << "+";

    for(int i=0; i<(s-t); i++){
        cout << "-";
    }
    return 0;
}


