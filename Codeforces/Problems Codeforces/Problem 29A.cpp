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

    vii position(t);
    vii length(t);
    for (int i = 0; i < t; i++) {
        cin >> position[i] >> length[i];
    }

    int total = 0;
    for (int i = 0; i < t-1; i++) {
        for (int j = i + 1; j < t; j++) {
            if (position[i] == position[j] + length[j] && position[j] == position[i] + length[i]) {
                total++;
                break;
            }
        }
        if (total != 0){
            break;
        }
    }

    if (total != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
} 