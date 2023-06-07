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

void gunung (int x) {
    if (x == 1) {
        cout << "*" << endl;
    } else {
        gunung(x-1);
        for (int i = 0; i < x; i++) {
            cout << "*";
        }
        cout << endl;
        gunung(x-1);
    }
}

int main()
{
    int n;
    cin >> n;
    gunung(n);
}

// Sources : https://tlx.toki.id/courses/basic/chapters/13/problems/B