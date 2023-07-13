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
    int t;
    cin >> t;

    int A, B, C;
    A = 0; B = 0; C = 0;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        A += a; B += b; C += c;
    }
    if (A == 0 && B == 0 && C == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}