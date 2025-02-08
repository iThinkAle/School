#include <iostream>
using namespace std;

int main(){
	int n, cif;
	cout << "inserisci un intero" << endl;
	cin >> n;
	do{
		cif++;
		n /= 10;
	}while(n > 0);
	cout << "questo numero ha " << cif << " cifre" << endl;
	
	
	
	int x;
	do{
		cout << "inserisci un numero" << endl;
		cin >> x;
		if(x >= 5 && x <= 10){
			cout << x << endl;
			break;
		}
		else{
            cout << "inserire un numero tra 5 e 10" << endl;
			continue;
		}
	}while(true);
	
	
	
	int som = 0;
    int par = 0;
	do{
		int z;
		cout << "inserire numero intero" << endl;
		cin >> z;
		som += z;
		if(z % 2 == 0){
			par++;
		}
	}while(par < 6);
	cout << "la somma � " << som << endl;
	
	
	return 0;
}
