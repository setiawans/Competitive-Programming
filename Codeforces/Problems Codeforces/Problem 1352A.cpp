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
        int x;
        cin >> x;

        vii arr(5);
        for (int i = 0; i < 5; i++) {
            arr[i] = 0;
        }

        int index = 0;
        while(x != 0) {
            arr[index] = x % 10;
            x /= 10;

            if (index != 4) {
                index++;
            }
        }
        
        int count = 0;
        for (int i = 0; i < 5; i++) {
            if (arr[i] != 0) {
                count ++;
            }
        }
        cout << count << endl;

        int pow = 1;
        for (int i = 0; i < 5; i++) {
            if (arr[i] != 0) {
                cout << arr[i] * pow;
                if (i + 1 != 5) {
                    cout << " ";
                }
            }
            pow *= 10;
        }
        cout << nl;
    }
} 