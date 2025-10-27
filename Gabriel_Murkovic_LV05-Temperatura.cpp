#include <iostream>
using namespace std;

int main() {
    int temperatura;

    // Unos temperature
    cout << "Unesite temperaturu: ";
    cin >> temperatura;

    // Provjera temperature i ispis odgovarajuæe poruke
    if (temperatura < 20) {
        cout << "Hladno je ili prohladno" << endl;
    }
    else if (temperatura >= 20 && temperatura < 25) {
        cout << "Ugodno je toplo" << endl;
    }
    else {
        cout << "Toplo je ili jako toplo" << endl;
    }

    return 0;
}
