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
    ll t;
    cin >> t;

    vll arr(t);
    ll total = 0;
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    sort(arr.begin(),arr.end());
    ll temp = total - arr[t-1];
    if (total % 2 == 0 && arr[t-1] <= temp) {
        retyes
    } else {
        retno
    }
}