#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    int N;
    cin >> N;

    int a[N];

    for(int i=0; i<N; i++){
        cin >> a[i];
    }

    sort(a,a+N);
    reverse(a,a+N);

    cout << a[(N/2)];

    return 0;
}
