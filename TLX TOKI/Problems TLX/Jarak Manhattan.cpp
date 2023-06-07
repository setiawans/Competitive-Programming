#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x1, x2, y1, y2, jarakx, jaraky, jarak;
    cin >> x1 >> y1 >> x2 >> y2;

    jarakx = x1-x2;
    jaraky = y1-y2;

    if (jarakx < 0) {
        jarakx = jarakx * -1;
    }

    if (jaraky < 0) {
        jaraky = jaraky * -1;
    }

    jarak = jarakx + jaraky;
    
    cout << jarak << endl;
}