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
#define vii vector<int>
#define vll vector<long long>
#define vss vector<string>
#define pb push_back

// ASCII 'a' adalah 97
// ASCII 'A' adalah 65

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    /* Older USACO Problem Template
    freopen("problemname.in", "r", stdin);
	freopen("problemname.out", "w", stdout);
    */
    
    // Normal Array
    array<int, 25> arr;
    /*
    Agar nilai tiap array pada index 0 ... N adalah 0, ada beberapa cara yang dapat dilakukan, seperti :
    1. Gunakan loop
    2. Declare arraynya di scope global
    3. Declare array dengan empty initializer list. Contohnya : int arr[25]{};
    4. Gunakan built-in function, seperti std::fill_n(arr,25,0) atau std::fill(arr, arr+25,0)
    */

    // Dynamic Array
    vii v;
    for (int i = 1; i <= 10; i++) {
        v.pb(i);
    }

    int n;
    cin >> n;
    int a[n]; // Not recommended

    vii b(n); // Cara pertama
    vii c;
    c.resize(n); // Cara kedua

    /*
    vector<vector<int>> Dynamic arrays of dynamic arrays
    array<vector<int>,5> Static arrays of dynamic arrays
    vector<array<int,5>> Dynamic arrays of static arrays
    */

    vii d{1, 7, 4, 5, 2};
    for (int i = 0; i < int(size(d)); i++) {
        cout << d[i] << " ";
        cout << endl;
    }

    for (auto it = begin(v); it != end(v); it = next(it)) { // Using auto and iterator
        cout << *it << " ";
    }

    for (int element : d) {
        cout << element << " "; 
    }

    vii e;
    e.pb(2);
    e.pb(3);
    e.pb(7);
    e.pb(5);
    e[1] = 4;
    e.erase(e.begin() + 1);
    e.pb(8);
    e.erase(v.end() - 1);
    e.pb(4);
    e.pb(4);
    e.pb(9);
    cout << e[2];
    e.erase(e.begin(), e.begin()+3); // [4, 4, 9]

    // Pairs
    /*
    pair<type1, type2> p
    make_pair(a,b)
    {a, b}
    pair.first
    pair.second
    */

    pair<string, int> myPair1 = make_pair("Testing", 123);
    cout << myPair1.first << " " << myPair1.second << endl;
    myPair1.first = "Bisa diganti ga";
    cout << myPair1.first << " " << myPair1. second << endl;
    pair<string, string> myPair2 = {"Testing", "curly braces"};
    cout << myPair2.first << " " << myPair2.second << endl;

    // Tuples
    /*
    tuple<type1, type2, ..., typeN> t
    make_tuple(a, b, c, ..., d)
    tie(a, b, c, ..., d)
    get<i>(t)
    */

    int f = 3, g = 4, h = 5;
    tuple<int, int, int> t = tie(f, g, h);
    cout << get<0>(t);
    get<0>(t) = 7;
    cout << get<0>(t);
    
    tuple<string, string, int> tp2 = make_tuple("Hello", "world", 100);
    string s1, s2;
    int x;
    tie(s1,s2,x) = tp2;
    cout << s1 << " " << s2 << " " << x << endl;
}