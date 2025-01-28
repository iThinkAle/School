#include <iostream>
using namespace std;

int main() {
    int numero;
    bool è_primo = true;

    // Input dell'utente
    cout << "Inserisci un numero: ";
    cin >> numero;

    // I numeri minori o uguali a 1 non sono primi
    if (numero <= 1) {
        è_primo = false;
    } else {
        // Controlla se il numero ha divisori diversi da 1 e da sé stesso
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                è_primo = false;
                break;
            }
        }
    }

    // Stampa il risultato
    if (è_primo) {
        cout << numero << " è un numero primo." << endl;
    } else {
        cout << numero << " non è un numero primo." << endl;
    }

    return 0;
}