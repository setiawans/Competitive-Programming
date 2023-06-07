#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;

int hitungFungsi(int A, int B, int &X) {
    int fungsi;
    fungsi = abs(A*X + B);
    return fungsi;
}

int main()
{
    int A, B, K, X;
    cin >> A >> B >> K >> X;

    for (int i = 0; i < K; i++){
        X = hitungFungsi(A, B, X);
    }

    cout << X << endl;
}