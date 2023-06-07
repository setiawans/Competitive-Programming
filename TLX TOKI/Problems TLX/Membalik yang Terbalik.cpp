#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;

int reverse (int &x) {
    int temp = x;
    int ret = 0;

    while (temp > 0) {
        ret = (ret * 10) + (temp % 10);
        temp /= 10;
    }

    return ret;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << 123/10 << endl;
    int c = reverse(a) + reverse(b);
    cout << reverse(c) << endl;   
}