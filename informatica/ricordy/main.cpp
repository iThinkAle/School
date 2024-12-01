#include <iostream>
using namespace std;

int main() {
    int p = 1;
    for(int i = 0; i < 5; i++) {
        int num;
        cout << "Inserire un numero: ";
        cin >> num;
        p = p * num;
    }
    cout << "Il risultato è " << p << endl;
    return 0;
}