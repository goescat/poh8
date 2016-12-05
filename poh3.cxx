#include <iostream>

using namespace std;
int main(void){
    string d_1, d_2, d_3, d_4, d_5;
    string e_1, e_2, e_3, e_4, e_5;

    int countok =0;

    cin >> d_1;
    cin >> e_1;
    if(e_1==d_1){
        countok++;
    }
    else{
        countok+0;
    }

    cin >> d_2;
    cin >> e_2;
    if(e_2==d_2){
        countok++;
    }
    else{
        countok+0;
    }

    cin >> d_3;
    cin >> e_3;
    if(e_3==d_3){
        countok++;
    }
    else{
        countok+0;
    }

    cin >> d_4;
    cin >> e_4;
    if(e_4==d_4){
        countok++;
    }
    else{
        countok+0;
    }


    cin >> d_5;
    cin >> e_5;
    if(e_5==d_5){
        countok++;
    }
    else{
        countok+0;
    }

    if(countok >= 3){
        cout << "OK";
    }
    else{
        cout << "NG";
    }


    return 0;
}
