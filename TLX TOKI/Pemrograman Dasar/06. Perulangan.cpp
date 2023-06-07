#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

/*
int main()
{
    int N{};
    cin >> N;

    for (int i = 0; i < N; i++ ){
        cout << "Tulisan ini dicetak saat i = " << i << endl;
    }

    cout << "Akhir program" << endl;

    return 0;
}
*/

/*
int main() {
    int awal, akhir;
    cin >> awal >> akhir;

    int jumlah = 0;
    for (int i = awal; i <= akhir; i++){
        jumlah += i;
    }

    cout << "Jumlah bilangan dari " << awal << " sampai " << akhir << " adalah " << jumlah << endl;
}
*/

/*
int main() {
    int N{};
    cin >> N;

    int i = 0;
    while (i < N) {
        cout << "Tulisan ini dicetak saat i = " << i << endl;
        i++;
    }

    cout << "Akhir program" << endl;
}
*/

/*
int main() {
    int awal{}, akhir{};
    cin >> awal >> akhir;

    int jumlah = 0;
    while (awal <= akhir) {
        jumlah += awal;
        awal++;
    }

    cout << "Total " << jumlah << endl;
}
*/

int main() {
    int awal, akhir;
    cin >> awal >> akhir;

    int jumlah = 0;
    do {
        jumlah += awal;
        awal ++;
    } while (awal <= akhir);

    cout << jumlah << endl;
}