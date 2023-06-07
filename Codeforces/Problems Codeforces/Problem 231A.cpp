#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;

/*
int main()
{
    int n;
    cin >> n;

    int solve = 0;
    int a, b, c;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        switch (a) {
            case 1 :
            if (b == 1) {
                solve ++;
                break;
            } else if (c == 1) {
                solve ++;
                break;
            }

            case 0 :
            if (b == 1) {
                if (c == 1) {
                    solve ++;
                    break;
                }
            }
        }
    }
    cout << solve << endl;
}
*/

int main() {
    int n;
    cin >> n;

    int solve = 0;
    int a, b, c;

    for (int i = 0; i < n; i ++) {
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            solve ++;
        }
    }

    cout << solve << endl;
}