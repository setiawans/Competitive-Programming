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

int faktorial(int x) {
    if (x == 1) {
        return 1;
    } else {
        return x * faktorial(x-1);
    }
}

int jdd(int x) {
    if (x == 0) {
        return 0;
    } else {
        return jdd(x/100) + (x%100);
    }
}

int main()
{
    int N;
    cin >> N;
    
    cout << faktorial(N) << endl;
    cout << 198/100 << endl;
}