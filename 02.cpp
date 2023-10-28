//Problem name: 02 
//https://atcoder.jp/contests/abc326/tasks/abc326_a

#include<bits/stdc++.h>
using namespace std;
int main(){
    int X,Y;
    cin >> X >> Y;
    int up = Y-X;
    int down = X-Y;

    if(X<Y){
        if(up<=2){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    if(X>Y){
        if(down<=3){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    if(X==Y){
        cout << "Yes" << endl;
    }

    return 0;
}