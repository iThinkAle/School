#include <iostream>
#include <string>
using namespace std;

/*
namespace baule{
	int	a = 1;
	int b = 2;
	float c = 3.5;
	const int d = 4;
}

namespace spazio{
	int	e = 5;
	int f = 6;
	float g = 7.7;
	float h = 8.88;
	float i = 9.999;
	string j = "10";
	const int k = 11;
	const int l = 12;
}

using namespace baule;
using namespace spazio;
*/

int main(){
	
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

	
	/*int voti[24];
	int voto;
	for(int i=0; i<24; i++){
		cout << "inserisci il voto " << i + 1 << ": " << endl;
		cin >> voto;
		voti[i] = voto;
	}
	for(int i=0; i<24; i++){
		cout << "voto " << i + 1 << ": " << voti[i] << endl;
	}
	
	
	
	cout << a << endl << b << endl << c << endl << d << endl;
	cout << a << endl << b << endl << c << endl << d << endl << e << endl << f << endl << g << endl << h << endl << i << endl << j << endl << k << endl << l;
	
	
	
	int const a = 10;
	cout << a << endl;
	
	int numero;
	numero = 10;
	cout << numero << endl;
	
	int prova;
	prova = 5620;
	cout << prova << endl;
	
	int tiro, forza, precisione;
	tiro = 74;
	forza = 87;
	precisione = 90;
	cout << tiro << " " << forza << " " << precisione;
	
	
	
	float pezzi, spesai, sconto, spesa;
	cout << "quanti prodotti ha acquistato?" << endl;
	cin >> pezzi;
	cout << "quanto ha speso?" << endl;
	cin >> spesai;
	
	if(pezzi <= 3){
		sconto = spesai * 5 / 100;
		spesa = spesai - sconto;
	}
	else if(pezzi <= 5){
		sconto = spesai * 10 / 100;
		spesa = spesai - sconto;
	}
	else if(pezzi <= 10){
		sconto = spesai * 20 / 100;
		spesa = spesai - sconto;
	}
	else{
		sconto = spesai * 30 / 100;
		spesa = spesai - sconto;
	}
	
	cout << "l'importo da pagare ammontava a " << spesai << " euro, " << endl << "con uno sconto del " << sconto << "% ammonta ora a " << spesa << " euro";
	
	
	
	float cf, ct, km;
	cf = 1.50;
	
	cout << "quanti km ha percorso?" << endl;
	cin >> km;
	
	if(km < 10){
		ct = cf + (km * 1); 
	}
	
	else if(km <= 20){
		ct = cf + (km * 1.25);
	} 
	
	else{
		ct = cf + (km * 1.5);
	}
	
	cout << "il costo del biglietto ammonta a " << ct << " euro" << endl;
	
	
	
	int pq, spesa, sconto;
	cout << "Quanti prodotti ha acquistato?" << endl;
	cin >> pq;
	cout << "Quanto ha speso?" << endl;
	cin >> spesa;
	
	if(pq <= 10){
		spesa = spesa - (spesa * 10 / 100);
	}
	else{
		spesa = spesa - (spesa * 15 / 100);
	}
	
	cout << "La spesa totale ammonta a " << spesa << endl;
	

    
	int a, b, c, s;
	cout << "primo numero" << endl;
	cin >> a;
	cout << "secondo numero" << endl;
	cin >> b;
	cout << "terzo numero " << endl;
	cin >> c;

	s = a+b+c;

	//cout << "risultato " << s;
    if (s == 3){
        cout << "è 3";
    }
    else{
        cout << "altro";
    }
    
    
    
    int n;
    cout << "inserisci un numero intero" << endl;
    cin >> n;
    
    if(n > 100){
        cout << "ho un numero maggiore di 100";
    }
    else{
        cout << "ho un numero minore di 100";
    }*/
	return 0;
}
