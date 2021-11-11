#include <iostream>
using namespace std;
int main() {
    int liczba_1;
    cout << "podaj dowolna liczbe: " << endl;
    cin >> liczba_1;
    if (liczba_1 > 1) {
        cout << "1" << endl;
    }
    if (liczba_1 < 0) {
        cout << "-1" << endl;
    }
    if (liczba_1 == 0) {
        cout << "0" << endl;
    }
    

    return 0;
}

