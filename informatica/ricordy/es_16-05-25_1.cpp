#include <iostream>
using namespace std;

int main(){
	float voti[11];
	float med = 0;
	float som = 0;
	
	for(int i = 0; i < 11; i++){
		float n;
		cout << "inserisci voto del calciatore " << i+1 << endl;
		cin >> n;
		
		voti[i] = n;
		som += n;
	}
	
	med = som / 11;
	cout << "la media dei voti è " << med << endl; 
	
	return 0;
}
