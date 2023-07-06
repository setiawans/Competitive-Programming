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
    int t;
    cin >> t;

    while(t--) {
        int x;
        cin >> x;
        
        vii arr(x);
        for (int i = 0; i < x; i++) {
            cin >> arr[i];
        }

        int min = 1e5;
        for (int i = 0; i < x - 1; i++) {
            for (int j = i + 1; j < x; j++) {
                int value = abs(arr[i] - arr[j]);
                if (value < min) {
                    min = value;
                }
            }
        }
        cout << min << endl;
    }
}