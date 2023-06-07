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
    for (int i = 0; i < n; i++) {
        cin >> s;
        int s_length = s.length();
        if (s_length > 10) {
            cout << s[0] << s_length-2 << s[s_length-1] << endl;
        } else {
            cout << s << endl;
        }
    }
}