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
    int n;
    cin >> n;

    while(n--) {
        int x;
        cin >> x;

        if (x % 2 == 0) {
            cout << x/2 << endl;
        } else {
            cout << x/2 + 1 << endl;
        }

        int temp = 1;
        int ret = 3*x;
        while(temp < ret) {
            cout << temp << " " << ret << endl;
            temp += 3;
            ret -= 3;
        }
    }
}