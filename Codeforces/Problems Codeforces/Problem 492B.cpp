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
    int n, l;
    cin >> n >> l;

    vii lantern(n);
    for (int i = 0; i < n; i++) {
        cin >> lantern[i];
    }

    sort(lantern.begin(), lantern.end());
    double min = 0;
    if (lantern[0] != 0) {
        min = lantern[0];
        if (lantern[n-1] != l) {
            if ((l - lantern[n-1]) > min) {
                min = l -lantern[n-1];
            }
        }
    } else {
        min = l - lantern[n-1];
    }

    double maks = 0;
    for (int i = 0; i < n-1; i++) {
        if (abs(lantern[i] - lantern[i+1]) > maks) {
            maks = abs(lantern[i] - lantern[i+1]);
        }
    }
    
    if (min > maks/2) {
        cout << fixed << setprecision(9) << min << endl;
    } else {
        cout << fixed << setprecision(9) << maks/2 << endl;
    }
}