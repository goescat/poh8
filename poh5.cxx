#include <iostream>

using namespace std;
int main(void){
    int n;
    int m;
    int tpuls=0;

    cin >> n;
    n = n*60;

    cin >>m;
    int t[m];

    for(int i=0; i<m; i++){
        cin >> t[i];
    }

    for(int i=0; i<m; i++){
        tpuls = tpuls+t[i];
        if(tpuls>n){
            cout << i <<endl;
            break;
        }
    }
    if (tpuls < n){
        cout << "OK"<<endl;
    }

    return 0;
}


