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
#define vbb vector<bool>
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
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (n % m == 0) {
        if ((n/m)*b > n*a) {
            cout << n*a << endl;
        } else {
            cout << (n/m) * b << endl;
        }
    } else {
        if ((n%m)*a > b) {
            cout << ((n/m)+1)*b << endl;
        } else {
            cout << (n/m) * b + (n%m) * a << endl;
        }
    }
}

// source : https://codeforces.com/contest/466/problem/A