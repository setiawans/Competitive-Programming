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

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    string x;
    cin >> x;
    
    int totalA, totalB;
    totalA = totalB = 0;
    for (int i = 0; i < x.size()-1; i++) {
        if(x[i] == 'A') {
            totalA += x[i+1];
        } else if (x[i] == 'B') {
            totalB += x[i+1];
        }
    }
    
    if (totalA > totalB) {
        cout << "A" << endl;
    } else {
        cout << "B" << endl;
    }
    
    return 0;

    /* Easier and Best Solution
    #include <iostream>
    using namespace std;

    int main() {
	    string s;
	    cin >> s;
	    cout << s[s.size() - 2];
    }
    */
}