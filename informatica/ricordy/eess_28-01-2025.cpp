#include <iostream>
#include <string>
using namespace std;

int main(){
	cout << "primo esercizio" << endl;
	int i_uno = 3;
	while(i_uno <= 100){
		cout << i_uno << endl;
		i_uno += 3;
	}
	
	
	cout << "secondo esercizio" << endl;
	int elem;
	int i_due = 0;
	int a = 0;
	int b = 1;
	int n;
	cout << "inserisci numero elementi della sequenza di fibonacci" << endl;
	cin >> elem;

	cout << a << endl;
	cout << b << endl;
	while (i_due < elem-2){
		n = a + b;
		cout << n << endl;
		a = b;
		b = n;
		i_due++;
		/*cout << a << endl;
		int temp = a;
		a = b;
		b = temp + b;*/
	}
	
	
	cout << "terzo esercizio" << endl;
	string input;
	int lung;
	int i_tre = 0;
	int vocali = 0;
	cout << "inserisci una stringa" << endl;
	cin >> input;
	lung = input.size();
	while(i_tre < lung){
		if(input[i_tre] == 'a' || input[i_tre] == 'e' || input[i_tre] == 'i' || input[i_tre] == 'o' || input[i_tre] == 'u'){
			vocali++;
			i_tre++;
		}
		else{
			i_tre++;
		}
	}
	cout << "le vocali sono " << vocali << endl;
	
	
	cout << "quarto esercizio" << endl;
	int base;
	int esponente;
	int i_quattro;
	int ris = 1;
	cout << "inserisci base" << endl;
	cin >> base;
	cout << "inserisci esponente" << endl;
	cin >> esponente;
	while(i_quattro < esponente){
		ris = base * ris;
		i_quattro++;
	}
	cout << "il risultato è " << ris << endl;
	
	
	cout << "quinto esercizio" << endl;
	for(int i_cinque = 3; i_cinque <= 100; i_cinque+=3){
		cout << i_cinque << endl;
	}
	
	
	cout << "sesto esercizio" << endl;
	int n_sei;
	int min = 100000000;
	for(int i_sei = 0; i_sei < 5; i_sei++){
		cout << "inserisci numero" << endl;
		cin >> n_sei;
		if(n_sei < min){
			min = n_sei;
		}
		else{
			continue;	
		}
	}
	cout << "minimo: " << min << endl;
	
	
	cout << "settimo esercizio" << endl;
	int n_sette;
	bool primo = true;
	cout << "inserisci numero" << endl;
	cin >> n_sette;
	if(n_sette <= 1){
		primo = false;
	}
	else{
		for(int i_sette = 2; i_sette <= n_sette / 2; i_sette++){
			if(n_sette % i_sette == 0){
				primo = false;
				break;
			}
		}
	}

	if(primo){
		cout << n_sette << " è numero primo" << endl;
	}
	else{
		cout << n_sette << " non è numero primo" << endl;
	}

	
	cout << "ottavo esercizio" << endl;
	int pos, neg, nul;
	for(int i_otto = 0; i_otto < 10; i_otto++) {
		int n;
		cout << "inserisci numero" << endl;
		cin >> n;
		if(n > 0){
			pos++;
		}
		else if(n < 0){
			neg++;
		}
		else if(n == 0){
			nul++;				//da sistemare, output dei nulli errato
		}
	}
	cout << "positivi: " << pos << endl;
	cout << "negativi: " << neg << endl;
	cout << "nulli: " << nul << endl;


	cout << "nono esercizio" << endl;
	int numalun;
	float som, med;
	cout << "inserisci numero alunni nella classe" << endl;
	cin >> numalun;
	for(int i_nove = 0; i_nove < numalun; i_nove++) {
		for(int i_nove_due = 0; i_nove_due < 5; i_nove_due++) {
			float vot;
			cout << "inserisci voto " << i_nove_due+1 << ": " << endl;
			cin >> vot;
			som = som + vot;
		}
		med = som / 5;
		cout << "media alunno " << i_nove+1 << ": " << med << endl;
		med = 0;
		som = 0;
	}

	
	return 0;
}


