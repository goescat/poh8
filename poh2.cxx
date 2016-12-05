#include <iostream>
using namespace std;
int main(void){
    int N;

    cin >> N;
    if(N%7 == 0){
        cout << "lucky" << endl;
    }
    else{
        cout << "unlucky" <<endl;
    }
    return 0;
}
