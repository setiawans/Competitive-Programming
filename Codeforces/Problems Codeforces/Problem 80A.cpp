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

int nextPrime(int x) {
    for (int i = x; i > 0; i++) {
        int count = 0;
        for (int j = 2; j <= x/2; j++) {
            if (i % j == 0) {
                count ++;
            }
        }
        if (count == 0) {
            return i;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    /* Older USACO Problem Template
    freopen("problemname.in", "r", stdin);
	freopen("problemname.out", "w", stdout);
    */
    int n, m;
    cin >> n >> m;
    
    int cek = nextPrime(n+1);
    if (cek == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}