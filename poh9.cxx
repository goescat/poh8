#include <iostream>
using namespace std;
int main(void){
    int n,m;
    cin >> n;
    cin >> m;
    if(m%n == 0){
        cout << "ok";
    }else{
        cout << "ng";
    }
    return 0;
}
