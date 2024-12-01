#include <iostream>
#include <string>
using namespace std;

int main(){
	/*
	int arpos[25];
	int pos;
	string arnom[25];
	string nom;
	
	for(int i = 0; i<25; i++){
		cout << "inserisci nome corridore " << i+1<< ": ";
		cin >> nom;
		cout << endl;
		cout << "inserisci posizione di arrivo" << endl;
		cin >> pos;
		arpos[i] = pos;
		arnom[i] = nom;
	}
	for(int i = 0; i<25; i++){
		cout << "posizione di " << arnom[i] << ": " << arpos[i] << endl;
	}
//-------------------------------------------------------------------------------------------------------
	int s[30];
	int p;
	
	for(int i = 0; i<30; i++){
		cout << endl;
		cout << "inserisci posizione di arrivo" << endl;
		cin >> p;
		s[i] = p;
	}
	for(int i = 0; i<30; i++){
		cout << "posizione dello sciatore " << i+1 <<": " << s[i] << endl;
	}
//-------------------------------------------------------------------------------------------------------
	char mano;
	int mancini = 0;
	for(int i = 0; i<25; i++){
		cout << "inserire mano (d = destra; s = sinistra)" << endl;
		cin >> mano;
		if(mano == 's'){
			mancini = mancini + 1;
		}
	}
	cout << "mancini: " << mancini;
	*/
//-------------------------------------------------------------------------------------------------------
	int num_articoli;
	float spesa_totale;
	
	cout << "inserire la spesa: " << endl;
	cin >> spesa_totale;
	cout << "inserire il numero di articoli: " << endl;
	cin >> num_articoli;
	if(num_articoli > 5){
		spesa_totale = spesa_totale-(spesa_totale*10/100);
		cout << "la spesa totale è: " << spesa_totale;
	}
	else{
		cout << "la spesa totale è: " << spesa_totale;
	}
	
	return 0;
}
