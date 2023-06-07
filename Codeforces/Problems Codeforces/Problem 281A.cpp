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
    string s;
    cin >> s;
    int s_length = s.length();
    char x = toupper(s[0]);
    if (s[0] == x) {
        cout << s << endl;
    } else {
        cout << x;
        for (int i = 1; i < s_length; i++) {
            cout << s[i];
        }
    }
}

// source : https://codeforces.com/problemset/problem/281/A