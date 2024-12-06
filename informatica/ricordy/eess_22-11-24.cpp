#include <iostream>
#include <string>
using namespace std;

int main(){
	
	//esercizi type casting
	cout << "primo esercizio" << endl;
	double unonumero1 = 3.14;
	int unonumero2 = unonumero1;
	cout << unonumero2 << endl;
	
	cout << "secondo esercizio" << endl;
	int duenumero1 = 33;
	char duenumero2 = static_cast <char> (duenumero1);
	cout << duenumero2 << endl;
	
	cout << "terzo esercizio" << endl;
	string trenumero1 = "15";
	int trenumero2 = std::stoi(trenumero1);
	cout << trenumero2;
	
	/*
	//esercizi stringhe
	cout << "primo esercizio" << endl;
	string a = "mondo";
	cout << a.find('n') << endl;
	
	cout << "secondo esercizio" << endl;
	string b, c;
	cout << "inserisci prima stringa" << endl;
	cin >> b;
	cout << "inserisci seconda stringa" << endl;
	cin >> c;
	cout << b+c << endl;
	
	cout << "terzo esercizio" << endl;
	string d;
	cout << "inserisci una stringa" << endl;
	cin >> d;
	cout << "lunghezza stringa = " << d.length() << endl;
	
	cout << "quarto esercizio" << endl;
	string e = "hello";
	string f = "world";
	string ef = e+f;
	cout << ef;
	
	
	
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
	}*/
	
	return 0;
}
