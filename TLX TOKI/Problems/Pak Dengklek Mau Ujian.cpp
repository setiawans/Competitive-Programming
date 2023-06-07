#include <iostream>

using namespace std;

int inputan(){
    int input{};
    cin >> input;
    return input;
}

int main(){
    int nilai{inputan()};
    if (nilai >= 0 && nilai <= 100) {
        cout << "YA" << endl;
    } else {
        cout << "TIDAK" << endl;
    }
}