#include <iostream>
using namespace std;

int main(){
	char caratteri[11];
	
	for(int i = 0; i < 11; i++){
		cout << "inserisci carattere " << i+1 << endl;
		cin >> caratteri[i];
		cout << "carattere inserito: " << caratteri[i] << endl;
	}
	
	return 0;
}
