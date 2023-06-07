#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

// Library C
#include <cstdio>
#include <cstring>

#define ll long long
#define ull unsigned long long

// ASCII 'a' adalah 97
// ASCII 'A' adalah 65

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while(n--){
        string s;
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::toupper);
        if (s == "YES") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}