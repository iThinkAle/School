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
	
	for(int i = 1; i <= 10; i++){
		if(i > 5){
			continue;
		}
		cout << i << endl;
	}
	cout << "ciclo finito" << endl;
	
	
	/*string nome = "luca";
	for(char carattere : nome){
		cout << carattere << endl;
	}
	
	
	
	int numero2 = 90;      //condizione    if      else
	string tipoNumero = (numero2 % 2 == 0) ? "pari" : "dispari";
	cout << tipoNumero << endl;
	
	
	int giorno;
	cout << "scrivi un numero da 1 a 3 che rappresenti il tuo giorno preferito del weekend" << endl;
	cin >> giorno;
	
	switch(giorno){
		case 1:
		cout << "venerdì" << endl;
		break;
		
		case 2:
		cout << "sabato" << endl;
		break;
		
		case 3:
		cout << "domenica" << endl;
		break;
		
		default:
		cout << "scelta errata" << endl;
		break;
	}
	
	
	
	int numero1 = 90;
	if(numero1 < 100){
		cout << "minore" << endl;
	}
	else if(numero1 > 100){
		cout << "maggiore" << endl;
	}
	else{
		cout << "uguale" << endl;
	}
	
	bool condizione = 65 == 65 && 4 >= 4;
	bool condizione2 = 5 < 3 || 7 != 7;
	cout << boolalpha << condizione << " " << condizione2 << endl;
	
	int num = 49;
	bool condNum = num % 2 == 0 && num < 100;
	cout << boolalpha << condNum << endl;
	
	
	char carattere = 'A';
	int carattereInt = carattere;
	cout << carattereInt << endl;
	
	float x = 3.99;
	int xInt = static_cast <int> (x);
	cout << xInt << endl;
	
	int z = 65;
	char zChar = static_cast <char> (z);
	char zId = typeid(z).name();
	char zCharId = typeid(zChar);
	cout << zChar << zId << zCharId;
	
	
	
	string a = "hello";
	string b = "world";
	string c = "1";
	string d = "2";
	string aBcD = a+b+c+d;
	a[1] = 'A';
	//aBcD.clear();
	cout << a << endl;
	cout << a[0] << endl;
	cout << aBcD.append("3") << endl;
	cout << aBcD.find("l") << endl;
	cout << aBcD.replace(10, 3, "456");
	
	
	
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

	
	int voti[24];
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
        cout << "ï¿½ 3";
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
