#include <iostream>
using namespace std;

int main(){
	float prezzofisso = 29.99;
	int giorninol;
	float prezzofinale;
	
	cout << "inserire i giorni di noleggio: " << endl;
	cin >> giorninol;
	
	prezzofinale = prezzofisso * giorninol;
	
	if(giorninol > 10){
		float prezzoscontato = prezzofinale-(prezzofinale/100*15);
		cout << "il totale da pagare è pari a " << prezzoscontato << " euro" << endl;
	}
	else{
		cout << "il totale da pagare è pari a " << prezzofinale << " euro" << endl;
	}
	
	return 0;
	
}
