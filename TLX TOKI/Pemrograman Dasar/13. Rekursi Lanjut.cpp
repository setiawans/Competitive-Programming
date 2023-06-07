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

int x;
int catat[100001];
bool pernah[100001];
int fibonacci (int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

void tulis (int s) {
    if (s >= x) {
        for (int i = 0; i < x; i++) {
            cout << catat[i];
        }
        cout << endl;
    } else {
        for (int i = 1; i <= x; i++) {
            if (!pernah[i]) {
                pernah[i] = true;
                catat[s] = i;
                tulis(s+1);
                pernah[i] = false;
            }
        }
    }
}

int main()
{
    cin >> x;

    int a = 1;
    int b = 1;
    int c = b;
    for (int i = 1; i < x - 1; i++) {
        if (i == 1) {
            a += b;
        } else {
            c = a;
            a += b;
            b = c;
        }
    }

    tulis(0);
    cout << a << endl;

    cout << fibonacci(x) << endl;
}