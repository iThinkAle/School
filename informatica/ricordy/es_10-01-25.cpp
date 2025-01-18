#include <iostream>
using namespace std;

int main(){
	int vittorie, pareggi, sconfitte;
	cout << "inserisci le vittorie " << endl;
	cin >> vittorie;
	cout << "inserisci i pareggi " << endl;
	cin >> pareggi;
	cout << "inserisci le sconfitte " << endl;
	cin >> sconfitte;
	
	if(vittorie + pareggi + sconfitte == 10){
		int punti = 3 * vittorie + pareggi;
		cout << "la squadra ha totalizzato " << punti << " punti" << endl;
	}
	else{
		cout << "inserire i dati in modo che le partite siano un totale di dieci" << endl;
	}
	
	
	int numero;
	cout << "inserire un numero" << endl;
	cin >> numero;
	
	if(numero %2 == 0){
		cout << "il numero è pari";
	}
	else{
		cout << "il numero è dispari";
	}
	
	
	int voti[10];
	int voto;
	for(int i=0; i<10; i++){
		cout << "inserisci il voto " << i + 1 << ": " << endl;
		cin >> voto;
		voti[i] = voto;
	}
	for(int i=0; i<10; i++){
		cout << "voto " << i + 1 << ": " << voti[i] << endl;
	}


	return 0;
}
