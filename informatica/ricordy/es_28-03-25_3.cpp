#include <iostream>
using namespace std;

int main(){
	int bin[6];
	int dec = 0;
	
	cout << "inserisci cifra per cifra un numero binario di 6 cifre" << endl;
	
	for(int i = 0; i < 6; i++){
		cin >> bin[i];
	}
	
	for(int i = 0; i < 6; i++){
		if(bin[i] = 1){
			dec += 2 ^ 5-i;
		}
	}
	
	cout << "il decimale corrispondente � " << dec << endl;
	
	return 0;
}

