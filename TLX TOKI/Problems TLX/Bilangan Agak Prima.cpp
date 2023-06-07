#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

#define ll long long
#define ull unsigned long long

using namespace std;

bool isPrime (int x) {
    int angka = 0;
    for (int i = 2; i < x; i ++) {
        if (x % i == 0) {
            angka ++;
        }
        
        if (angka > 2){
            return false;
        }
    }
    return true;
}


int main()
{
    int N;
    cin >> N;
    int ans;

    for (int i = 0; i < N; i++) {
        cin >> ans;
        bool prime = isPrime(ans);

        if (prime) {
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
    }
}

// sources : https://tlx.toki.id/courses/basic/chapters/08/problems/C