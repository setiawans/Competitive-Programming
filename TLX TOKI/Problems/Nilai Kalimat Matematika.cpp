#include <bits/stdc++.h>
#include <iostream>

using namespace std;
/*
int main()
{
    int x, z;
    char y;

    cin >> x >> y >> z;

    switch (y) {
        case '+' :
        cout << x + z;
        break;

        case '-' :
        cout << x - z;
        break;

        case '*' :
        cout << x * z;
        break;

        case '>' :
        if (x > z) {
            cout << "benar";
        } else {
            cout << "salah";
        }
        break;

        case '<' :
        if (x < z) {
            cout << "benar";
        } else {
            cout << "salah";
        }
        break;

        case '=' :
        if (x == z) {
            cout << "benar";
        } else {
            cout << "salah";
        }
        break;
    }

    return 0;
}
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void operasiMtk (int x, string y, int z) {
    if (y == "+"){
        cout << x + z << endl;
    } else if (y == "-") {
        cout << x - z << endl;
    } else {
        cout << x * z << endl;
    }
}

void operasiBoolean (int x, string y, int z) {
    if (y == ">") {
        if (x > z) {
            cout << "benar" << endl;
        } else {
            cout << "salah" << endl;
        }
    } else if (y == "<") {
        if (x < z) {
            cout << "benar" << endl;
        } else {
            cout << "salah" << endl;
        }
    } else {
        if (x == z) {
            cout << "benar" << endl;
        } else {
            cout << "salah" << endl;
        }
    }
}

int main() {
    int x{}, z{};
    string y{};

    cin >> x >> y >> z;
    if (y == "+" || y == "-" || y == "*"){
        operasiMtk(x,y,z);
    } else {
        operasiBoolean(x,y,z);
    }
}