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
    ull n, m, a;
    cin >> n >> m >> a;

    if (n % a == 0 && m % a == 0) {
        cout << (n/a) * (m/a) << endl;
    } else if (n % a == 0 && m % a != 0) {
        cout << (n/a) * ((m/a) + 1) << endl;
    } else if (n % a != 0 && m % a == 0) {
        cout << ((n/a)+1) * (m/a) << endl;
    } else {
        cout << ((n/a)+1) * ((m/a)+1) << endl;
    }
}