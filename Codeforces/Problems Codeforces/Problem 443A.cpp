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
    string x;
    getline(cin, x);

    if (x[1] == '}') {
        cout << 0 << endl;
    } else {
        vii arr(x.size()/3);
        int index = 0;
        for (int i = 1; i < x.size(); i += 3) {
            arr[index++] = x[i];
        }
        
        sort(arr.begin(), arr.end());
        int total = 1;
        for (int i = 0; i < index - 1; i++) {
            if (arr[i] != arr[i+1]) {
                total++;
            }
        }
        
        cout << total << endl;
    }
}