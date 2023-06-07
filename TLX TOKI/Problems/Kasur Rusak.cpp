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

bool isPalindrome = true;

bool cekPalindrome(string a, int b, int c) {
    if (b == c || b == c-1) {
        return true;
    } else if (a[b] == a[c]) {
        return true && cekPalindrome(a, b+1, c-1);
    } else {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;
    int s_length = s.size();
    int length = s_length - 1;
    int index = 0;

    if(cekPalindrome(s, index, length)) {
        cout << "YA" << endl;
    } else {
        cout << "BUKAN" << endl;
    }
}

// sources : https://tlx.toki.id/courses/basic/chapters/12/problems/D