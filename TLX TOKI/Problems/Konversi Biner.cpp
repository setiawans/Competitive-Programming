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

string biner(ll x) {
    if (x == 1) {
        return "1";
    } else if (x % 2 == 1) {
        return biner(x / 2) + "1"; 
    } else {
        return biner(x / 2) + "0";
    }
}

int main()
{
    ll N;
    cin >> N;

    cout << biner(N) << endl;
}

// sources : https://tlx.toki.id/courses/basic/chapters/12/problems/E