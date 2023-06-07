#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;

/*
string buff, pesan;
void bacaPesan() {
    cout << "Masukkan pesan : ";
    getline(cin,buff);
    pesan = buff;
}

void gambar (int x) {
    if (x > 1000) { // Void bisa menggunakan return, tapi tidak untuk mengembalikan nilai
        return;
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

int kubik(int x) {
    return x*x*x;
}

int main()
{
    // Pada Cpp, subprogram dipanggil fungsi
    bacaPesan();
    cout << pesan << endl;

    bacaPesan();
    cout << "Sekarang isinya " << pesan << endl;

    gambar(3);
    gambar(5);

    cout << kubik(10) << endl;
    cout << kubik(3) << endl;
}
*/

void tukar (int &a, int &b) { // Tambahkan & untuk menunjukkan bahwa fungsi menggunakan "passing value by reference"
    int temp = a;
    a = b;
    b = temp;
}

/*
int main () {
    int x = 1;
    int y = 2;
    tukar(x, y);
    cout << x << " " << y << endl;

    // Kita tidak bisa melakukan tukar(2,3) karena passing by parameter membutuhkan suatu variabel sebagai memori tempat menyimpan hasil kembalian
}
*/

string getStatus(int x) {
    if (x % 2 == 1) {
        return "a";
    } else {
        return "b";
    }
}

void printStatus(int a, int b) {
    for (int i = a; i <= b; i++) {
        cout << getStatus(i) << endl;
    }
}

int main() {
    printStatus(10,12);
    printStatus(2,4);
    printStatus(11,10);
    printStatus(10,8);
}
