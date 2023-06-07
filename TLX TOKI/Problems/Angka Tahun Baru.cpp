#include <bits/stdc++.h>
using namespace std;

bool cekPrima(int n){
    if (n<2){
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int N{};
    cin >> N;
    if (cekPrima(N) && N<7){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}