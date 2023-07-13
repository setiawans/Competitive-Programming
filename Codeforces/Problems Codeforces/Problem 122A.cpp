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

    string x = to_string(n);
    bool isTrue = true;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '4' || x[i] == '7') {
            continue;
        } else {
            isTrue = false;
            break;
        }
    }

    if (isTrue) {
        retyes
    } else {
        if (n % 47 == 0 || n % 744 == 0 || n % 4 == 0 || n % 7 == 0) {
            retyes
        } else {
            retno
        }
    }
}