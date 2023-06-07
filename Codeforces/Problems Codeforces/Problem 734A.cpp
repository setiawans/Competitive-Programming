#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int anton = 0;
    int danik = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'D') {
            danik ++;
        } else {
            anton ++;
        }
    }

    if (danik == anton) {
        cout << "Friendship" << endl;
    } else if (danik > anton) {
        cout << "Danik" << endl;
    } else {
        cout << "Anton" << endl;
    }
}