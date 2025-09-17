#include <iostream>
using namespace std;

int main(){
	int somma = 0;
	do{
	    int n;
	    cout << "inserisci numero" << endl;
		cin >> n;
		if(n < 0){
			continue;
		}
		else if (n == 0){
			break;
		}
		else{
			somma += n;
		}
		
	}
	while(1 == 1);
	
	cout << somma;
	return 0;
}

