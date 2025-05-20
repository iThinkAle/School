#include <iostream>
using namespace std;

int main(){
	int numart;
	float c;
	
	cout << "inserisci il numero degli articoli e il totale della spesa" << endl;
	cin >> numart;
	cin >> c;
	
	if(numart > 10){
		cout << "hai diritto al 5% di sconto sulla spesa totale" << endl;
		c = c * 0.95;
		cout << "il nuovo totale è pari a " << c;
	}
	else{
		cout << "non hai diritto al 5% di sconto sul totale, acquista più di 5 articoli" << endl;
		cout << "il totale è " << c << endl;
	}
	
	return 0;
}
