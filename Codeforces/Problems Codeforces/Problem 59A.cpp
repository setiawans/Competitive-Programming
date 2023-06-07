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

    int up = 0;
    int low = 0;

    int s_length = s.length();
    for (int i = 0; i < s_length; i++) {
        if(isupper(s[i])) {
            up++;
        } else {
            low++;
        }
    }

    if (up > low) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;
}