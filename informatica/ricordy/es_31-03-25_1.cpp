#include <iostream>
using namespace std;

int main() {
    int arnum[7];
    int zeri = 0;

    for (int i = 0; i < 7; i++) {
        int n;
        cout << "Inserisci un numero: " << endl;
        cin >> n;
        arnum[i] = n;
    }
    for (int i = 0; i < 7; i++) {
      	if (arnum[i] == 0) {
        	zeri++;
      	}
    }

	cout << "gli zeri sono " << zeri << endl;

	return 0;
}

