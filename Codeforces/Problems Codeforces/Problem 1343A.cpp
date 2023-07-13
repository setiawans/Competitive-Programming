#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define DEBUG(str, var) cout << str << " " << var << nl;
#define nl "\n"
#define vii vector<int>
#define vll vector<long long>
#define vss vector<string>
#define vbb vector<bool>
#define pb push_back
#define retyes cout << "YES" << endl;
#define retno cout << "NO" << endl;
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
    while(t--) {
        ll x;
        cin >> x;

        if (x % 3 == 0) {
            cout << x/3 << endl;
        } else {
            ll ret = 4;
            ll total = 3;
            while (x % total != 0) {
                total += ret;
                ret *= 2;
            }
            cout << x/total << endl;
        }
    }
}