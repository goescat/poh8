#include <iostream>
using namespace std;
int main(void){
    int p;
    cin >> p;
    if (p<1000){
        cout << (p/100);
    }else{
        cout << (p/100+10);
    }
    return 0;
}
