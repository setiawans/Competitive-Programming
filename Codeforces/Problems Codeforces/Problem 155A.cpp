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
    int t;
    cin >> t;

    vii arr(t);
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    int maks, min;
    maks = arr[0];
    min = arr[0];

    int total = 0;
    for (int i = 1; i < t; i++) {
        if (arr[i] > maks) {
            total ++;
            maks = arr[i];
        } else if (arr[i] < min) {
            total ++;
            min = arr[i];
        }
    }

    cout << total << endl;
}