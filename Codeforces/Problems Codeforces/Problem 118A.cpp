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
    
    /* Brute Force Approach
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == 'A' || x[i] == 'a' || x[i] == 'O' || x[i] == 'o' || x[i] == 'I' || x[i] == 'i' || x[i] == 'E' || x[i] == 'e' || x[i] == 'U' || x[i] == 'u' || x[i] == 'Y' || x[i] == 'y') {
            continue;
        } else {
            if (x[i] < 97) {
                x[i] += 32;
            }
            cout << "." << x[i];
        }
    }
    */

    for (int i = 0; i < x.size(); i++) {
        if (x[i] < 97) {
            x[i] += 32;
        }

        if (x[i] == 'a' || x[i] == 'i' || x[i] == 'u' || x[i] == 'e' || x[i] == 'o' || x[i] == 'y') {
            continue;
        } else {
            cout << "." << x[i];
        }
    }
} 