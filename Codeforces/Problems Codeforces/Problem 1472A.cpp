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
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        int luas = a*b;
        
        int temp = 0;
        while (luas % 2 == 0) {
            temp++;
            luas /= 2;
        }

        int jumlah = 1;
        for (int i = 0; i < temp; i++) {
            jumlah *= 2;
        }

        if (jumlah >= c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}