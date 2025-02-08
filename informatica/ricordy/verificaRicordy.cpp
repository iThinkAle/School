#include <iostream>
#include <string>
using namespace std;

int main(){
	string nome;
	string cognome;
	float media;				//dichiarazione delle variabili necessarie
	float sommavoti;
	char livello;
	
	cout << "inserisci nome: " << endl;				//inserimento del nome e del cognome
	cin >> nome;
	cout << "inserisci cognome: " << endl;
	cin >> cognome;
	
	cout << "inserisci 5 voti" << endl;
	for(int i=0; i<5; i++){							//ciclo for per l'inserimento di 5 voti
		float voto;
		cout << "inserisci il voto " << i + 1 << ": ";
		cin >> voto;
		sommavoti = sommavoti+voto;					//calcolo della somma totale dei voti a ogni ciclo
	}
	
	media = sommavoti/5;							//calcolo della media dei voti
	if(media >= 9){
		livello = 'A';
	}
	else if(media >= 8 && media <= 9){
		livello = 'B';								//calcolo del livello corrispondente alla media
	}
	else if(media >= 7 && media <= 8){
		livello = 'C';
	}
	else{
		livello = 'D';
	}
	
	cout << nome << " " << cognome << endl;
	cout << "la sua media dei voti è: " << media << endl;		//stampa del nome, del cognome, della media e del livello dello studente
	cout << "il suo livello è: " << livello << endl;
	
	
	return 0;
}
