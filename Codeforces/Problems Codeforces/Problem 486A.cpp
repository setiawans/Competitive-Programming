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
    ll n;
    cin >> n;
    
    if (n % 2 == 0) {
        cout << n/2 << endl;
    } else {
        cout << n/2 - n << endl;
    }
}