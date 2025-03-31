#include <iostream>
using namespace std;

int main(){
	int arint[23];
	int som = 0;
	int med = 0;
	
	for(int i = 0; i < 23; i++){
		int n;
		cout << "inserire numero " << i+1 << endl;
		cin >> n;
		arint[i] = n;
		
		som += arint[i];
	}
	
	med = som / 23;
	
	cout << "la somma dei numeri è " << som << ", mentre la media è " << med << endl;
	
	return 0;
}
