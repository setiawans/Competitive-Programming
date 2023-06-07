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

using namespace std;

/*
int main()
{
    string s;
    cin >> s;

    int b = s.length();
    int c = s.size();

    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = 'a';
    }

    cout << b << c << endl;

    cout << s << endl;
} 
*/

// Besok lanjut page 9 Pendalaman String

/*
char s[1001], t[1001];

int main() {
    scanf("%s %s",s, t);
    printf("%d\n",strlen(s));

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        printf("%c",s[i]);
    }

    printf("%d\n",strcmp(s, t));
    // Negatif, artinya s lebih awal dari t
    // Nol, artinya s == t
    // Positif, artinya s lebih akhir dari t
    // Kompleksitas O(N)
}
*/

/*
char s[1001];
int arr[101];

int main() {
    memset(s, 'x', sizeof(s));
    memset(arr, -1, sizeof(arr));
    printf("%c %d\n", s[0], arr[0]);

    // Fungsi lain seperti strcpy, strncpy, dan strstr dapat dipelajari di cplusplus.com
}
*/

int main() {
    string s = "Pak Dengklek Bertenak";
    string x = s;
    string t1 = " Dengklek";
    string t2 = "Pak";
    string t3 = "klek";

    cout << s.find(t1) << endl;
    cout << s.find(t2) << endl;
    cout << s.find(t3) << endl;

    cout << s.substr(0,6) << endl;
    cout << s.substr(2,3).c_str() << endl; // C_str tidak mandatory - Pelajari bedanya apa jika sempat

    s.erase(1, 3);
    cout << s << endl;

    x.insert(4, t2);
    cout << x << endl;

    string a = "Pak";
    string b = "Dengklek";
    string gabung = a + b;
    cout << gabung << endl;

    string test = "abc";
    test[0] -= 32;
    test[1] += 2;
    test[2] += 3;
    cout << test << endl;

    // ASCII 'a' adalah 97
    // ASCII 'A' adalah 65
    // Selisih 32

    string toki = "toki";
    for (int i = 0; i < toki.size(); i++) {
        toki[i] -= 'a' - 'A';
    }

    cout << toki << endl;
}