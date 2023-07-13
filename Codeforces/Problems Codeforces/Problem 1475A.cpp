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
    while(t--){
        ull x;
        cin >> x;

        if (x % 2 != 0) {
            retyes
        } else {
            bool isTrue = false;
            while(x/2 > 2) {   
                x /= 2;
                if (x % 2 != 0) {
                    isTrue = true;
                }
            }

            if (isTrue) {
                retyes
            } else {
                retno
            }
        }
    }
}