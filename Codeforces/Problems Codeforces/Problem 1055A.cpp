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
    int a, b;
    cin >> a >> b;

    vii station(a+1);
    vii station2(a+1);
    for (int i = 1; i <= a; i++) {
        cin >> station[i];
    }
    for (int i = 1; i <= a; i++) {
        cin >> station2[i];
    } 

    bool isTrue = false;
    if (station[1] == 0) {
        retno
        return 0;
    } else {
        if (station[b] == 1) {
            retyes
        } else {
            if (station2[b] == 1) {
                for (int i = b+1; i <= a; i++) {
                    if (station[i] == 1) {
                        if (station2[i] == 1) {
                            isTrue = true;
                            break;
                        }
                    }
                }
                if (isTrue) {
                    retyes
                } else {
                    retno
                }
            } else {
                retno
            }
        }
    }
}