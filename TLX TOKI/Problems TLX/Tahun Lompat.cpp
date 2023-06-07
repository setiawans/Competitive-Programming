#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool kondisiPertama (int x, int y, int z){
    if ((x%y == 0) && (x%z != 0)){
        return true;
    } else {
        return false;
    }
}

bool kondisiKedua (int x, int y){
    if (x%y == 0){
        return true;
    } else {
        return false;
    }
}

int main() {
    int N, A, B, C;
    cin >> N >> A >> B >> C;
    if (kondisiPertama(N,A,B) || kondisiKedua(N,C)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}