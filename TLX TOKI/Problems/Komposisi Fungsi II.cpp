#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

// Library C
#include <cstdio>
#include <cstring>

#define ll long long
#define ull unsigned long long

// ASCII 'a' adalah 97
// ASCII 'A' adalah 65

using namespace std;

int komposisi (int a, int b, int k, int x) {
    if (k == 1) {
        return abs(a * x + b);
        // alternative
        // Ubah conditional ke k == 0
        // return x
    } else {
        return abs(a * komposisi(a, b, k-1, x) + b);
    }
}

int main()
{
    int A, B, K, X;
    cin >> A >> B >> K >> X;

    cout << komposisi(A,B,K,X) << endl;
}