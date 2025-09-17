#include <iostream>
using namespace std;

int main(){
	int multipli[22];
	
	for(int i = 0; i < 22; i++){
		multipli[i] = i*2;
	}
	cout << "valore cella 4 = " << multipli[3] << endl; 
	cout << "valore cella 7 = " << multipli[6] << endl;
	cout << "valore cella 11 = " << multipli[10] << endl;
	cout << "valore cella 16 = " << multipli[15] << endl;
	cout << "valore cella 19 = " << multipli[18] << endl;
	
	return 0;
}
