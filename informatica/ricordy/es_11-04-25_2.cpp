#include <iostream>
using namespace std;

int main(){
	float array[19];
	float som, med;
	
	for(int i = 0; i < 19; i++){
		int n;
		cout << "inserire numero " << i+1 << endl;
		cin >> array[i];
		som += array[i]; 
	}
	
	med = som / 19;
	
	cout << "la media è " << med << endl;
	
	return 0;
}
