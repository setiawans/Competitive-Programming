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

    while(t--) {
        int x;
        cin >> x;

        vii arr(x);
        for (int i = 0; i < x; i++) {
            cin >> arr[i];
        }

        int a = arr[0];
        int b;
        for (int i = 1; i < x; i++) {
            if (arr[i] != a) {
                b = arr[i];
                break;
            }
        }

        int cekA = 0;
        int cekB = 0;
        for (int i = 0; i < x; i++) {
            if (arr[i] == a) {
                cekA ++;
            } else if (arr[i] == b) {
                cekB ++;
            }
        }

        int spy;
        if (cekA == 1) {
            spy = a;
        } else {
            spy = b;
        }
        
        for (int i = 0; i < x; i++) {
            if (spy == arr[i]) {
                cout << i+1 << endl;
                break;
            }
        }
    }
}