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
    int x = 0;
    int array[101];

    while (cin >> array[x]) {
        x++;
    }

    for (int i = x-1; i >= 0; i--) {
        cout << array[i] << endl;
    }
}

// sources : https://tlx.toki.id/courses/basic/chapters/09/problems/B