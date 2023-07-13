#include <bits/stdc++.h>

// Library C
#include <cstdio>
#include <cstring>

#define ll long long
#define ull unsigned long long
#define DEBUG(str, var) cout << str << " " << var << nl;
#define nl "\n"
#define vii vector<int>
#define vll vector<long long>
#define vss vector<string>
#define vbb vector<bool>
#define pb push_back
#define wickers ios_base::sync_with_stdio(false); cin.tie(0);

// ASCII 'a' adalah 97
// ASCII 'A' adalah 65

using namespace std;

int main()
{
    wickers
    /* Older USACO Problem Template
    freopen("problemname.in", "r", stdin);
	freopen("problemname.out", "w", stdout);
    */
    string x;
    cin >> x;
    
    int count = 0;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] < 97) {
            count ++;
        }
    }
    
    if (count == x.size()) {
        for (int i = 0; i < x.size(); i++) {
            x[i] += 32;
            cout << x[i];
        }
    } else if (count == x.size() - 1 && x[0] >= 97) {
        x[0] -= 32;
        cout << x[0];
        for (int i = 1; i < x.size(); i++) {
            x[i] += 32;
            cout << x[i];
        }
    } else {
        cout << x;
    }
}