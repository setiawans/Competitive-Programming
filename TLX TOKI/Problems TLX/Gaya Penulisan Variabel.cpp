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

string s;
string a = "_";

void snakeToCamel (string x) {
    if (s.find('_') == -1) {
        cout << s << endl;
    } else {
        while (s.find('_') != -1) {
            int x = s.find('_');
            s.erase(x, 1);
            while (s[x] == '_') {
                s.erase(x, 1);
            }
            s[x] -= 'a' - 'A';
        }
        cout << s << endl;
    }
}

int main()
{
    cin >> s;
    if (s.find('_') != -1) {
        snakeToCamel(s);
    } else {
        for (int i = 0; i < s.length(); i++) {
            if(s[i] < 'a') {
                s[i] += 'a' - 'A';
                s.insert(i,a);
            }
        }
        cout << s << endl;
    }
}

// sources : https://tlx.toki.id/courses/basic/chapters/11/problems/F