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

    int maks = 0;
    int total = 0;
    vii arr(t);
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
        total += arr[i];
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }

    cout << maks*t - total << endl;
}