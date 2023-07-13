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
    int a, b, c;
    cin >> a >> b >> c;

    vii maks(4);
    maks[0] = a+b+c;
    maks[1] = a*b*c;
    maks[2] = (a+b)*c;
    maks[3] = a*(b+c);

    int maksret = 0;
    for (int i = 0; i < 4; i++) {
        if (maks[i] > maksret) {
            maksret = maks[i];
        }
    }
    cout << maksret << endl;
}