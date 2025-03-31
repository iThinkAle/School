#include <iostream>
using namespace std;

int main() {
	int arnum[8];
    int som = 0;

    for (int i = 0; i < 8; i++) {
      	int n;
      	cout << "Inserisci numero " << i+1 << " : ";
      	cin >> n;
      	arnum[i] = n;
    }
    for (int i = 0; i < 8; i++) {
    	if(arnum[i] < 0){
        	som += arnum[i];
           	arnum[i] = 0;
        }
    }

    cout << "la somma dei negativi è " << som << endl;

	return 0;
}

