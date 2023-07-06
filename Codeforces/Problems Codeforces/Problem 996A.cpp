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
#define vii vector<int>
#define vll vector<long long>
#define vss vector<string>
#define pb push_back

// ASCII 'a' adalah 97
// ASCII 'A' adalah 65

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    /* Older USACO Problem Template
    freopen("problemname.in", "r", stdin);
	freopen("problemname.out", "w", stdout);
    */
    int n;
    cin >> n;

    int total = 0;
    if (n >= 100) {
        total += n/100;
        n %= 100;
    }

    if (n >= 20) {
        total += n/20;
        n %= 20;
    }

    if (n >= 10) {
        total += n/10;
        n %= 10;
    }

    if (n >= 5) {
        total += n/5;
        n %= 5;
    }

    if (n >= 1) {
        total += n;
        n = 0;
    }

    cout << total << endl;
}