#include <iostream>
#include <string>
using namespace std;

int main(){
	/*cout << "primo esercizio" << endl;
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
	cout << "inserisci numero elementi della sequenza di fibonacci" << endl;
	cin >> elem;
	
	while (i_due < elem){
		cout << a << endl;
		int temp = a;
		a = b;
		b = temp + b;
		i_due++;
	}
	
	
	cout << "terzo esercizio" << endl;
	string input;
	cout << "inserisci una stringa" << endl;
	cin >> input;
	int lung = input.size();
	int i_tre = 0;
	int vocali;
	while(i_tre < lung){
		
	}*/
	
	
	cout << "quarto esercizio" << endl;
	int base;
	int esponente;
	int i_quattro;
	int ris;
	cout << "inserisci base" << endl;
	cin >> base;
	cout << "inserisci esponente" << endl;
	cin >> esponente;
	while(i_quattro < esponente){
		ris = base * ris;
		i_quattro++;
	}
	cout << ris << endl;
	
	
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
	cout << "inserisci numero" << endl;
	cin >> n_sette;
	
	
	
	cout << "ottavo esercizio" << endl;
	
	
	cout << "nono esercizio" << endl;
	
	
	return 0;
}


