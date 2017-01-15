#include <iostream>
using namespace std;
int main(void){
    int M,N;
    cin >> M;
    cin >> N;
    if(M>N){
        cout << M-N;
    }else{
        cout << "0";
    }
    return 0;
}
