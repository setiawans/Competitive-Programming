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
    int n;
    cin >> n;

    double total = 0;
    for(int i = 0; i < n; i++) {
        double x;
        cin >> x;
        total += x;
    }

    double hasil = total/n;
    cout << fixed << setprecision(4) << hasil << endl; 
}