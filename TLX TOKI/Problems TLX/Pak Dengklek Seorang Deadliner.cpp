#include <iostream>

using namespace std;

int main() {
    int waktu{};
    cin >> waktu;

    int jam{}, menit{}, detik{};
    jam = waktu/3600;
    menit = (waktu - (jam*3600))/60;
    detik = (waktu - (jam*3600) - (menit*60));

    cout << jam << endl;
    cout << menit << endl;
    cout << detik << endl;
}