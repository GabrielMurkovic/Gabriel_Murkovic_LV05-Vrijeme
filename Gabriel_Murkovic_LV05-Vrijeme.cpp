#include <iostream>
using namespace std;

int main() {
    int temperatura1, temperatura2, temperatura3;
    int ispod_nule = 0, nula_ili_vi�e = 0;

    // Unos temperatura za tri dana
    cout << "Unesite temperaturu za prvi dan: ";
    cin >> temperatura1;
    cout << "Unesite temperaturu za drugi dan: ";
    cin >> temperatura2;
    cout << "Unesite temperaturu za tre�i dan: ";
    cin >> temperatura3;

    // Provjera za prvi dan
    if (temperatura1 < 0) {
        ispod_nule++;
    }
    else {
        nula_ili_vi�e++;
    }

    // Provjera za drugi dan
    if (temperatura2 < 0) {
        ispod_nule++;
    }
    else {
        nula_ili_vi�e++;
    }

    // Provjera za tre�i dan
    if (temperatura3 < 0) {
        ispod_nule++;
    }
    else {
        nula_ili_vi�e++;
    }

    // Ispis rezultata
    cout << "Broj dana sa temperaturom ispod nule: " << ispod_nule << endl;
    cout << "Broj dana sa temperaturom 0 ili vi�e: " << nula_ili_vi�e << endl;

    return 0;
}
