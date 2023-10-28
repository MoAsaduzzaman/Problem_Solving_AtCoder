//Problem name: 03 
//https://atcoder.jp/contests/abc326/tasks/abc326_b

#include<bits/stdc++.h>
using namespace std;

bool is326Like(int n){
    int ones = n % 10;
    int tens = (n / 10) % 10;
    int hundreds = n / 100;
    return (hundreds * tens == ones);
}

int main() {
    int N;
    cin >> N;

    while (true) {
        if (is326Like(N)) {
            cout << N << endl;
            break;
        }
        N++;
    }
    return 0;
}