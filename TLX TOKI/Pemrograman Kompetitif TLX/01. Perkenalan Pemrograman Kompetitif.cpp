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

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    /* Solusi tidak dapat digunakan untuk masukan yang besar
    ll n;
    cin >> n;

    int a = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            a++;
        }
    }

    if (a % 2 == 0) {
        cout << "MATI" << endl;
    } else {
        cout << "HIDUP" << endl;
    }
    */

    /*
    ll n;
    cin >> n;

    int a = 1;
    for (ll i = 2; i*i <= n; i++) {
        int factor = 0;
        while (n % i == 0) {
            factor++;
            n = n/i;
        }

        a *= (factor + 1);
    }
    if (n > 1) {
        a *= 2;
    }

    if (a % 2 == 0) {
        cout << "MATI" << endl;
    } else {
    cout << "HIDUP" << endl;
    }
    */

    ll n;
    cin >> n;

    ll a = round(sqrt(n));
    if (a * a != n) {
        cout << "MATI" << endl;
    } else {
        cout << "HIDUP" << endl;
    }
}