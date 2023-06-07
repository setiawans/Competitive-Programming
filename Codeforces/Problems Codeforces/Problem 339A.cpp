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
    int a = 0;
    int arr[1001];
    
    for (int i = 0; i < s_length; i++) {
        if (s[i] == '+') {
            continue;
        } else {
            arr[a++] = s[i] - '0';
        }
    }

    sort(arr, arr+a);
    for (int i = 0; i < a; i++) {
        cout << arr[i];
        if (i == a-1) {
            break;
        }
        cout << "+";
    }
}

// Source : https://codeforces.com/problemset/problem/339/A