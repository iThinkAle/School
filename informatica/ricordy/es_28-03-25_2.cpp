#include <iostream>
using namespace std;

int main(){
	int arint[8];
	int max = 0;
	int min = 10000000;
	int indmin, indmax;
		
	
	for(int i = 0; i < 8; i++){
		int n;
		cout << "inserire numero " << i+1 << endl;
		cin >> n;
		arint[i] = n;
	}
	
	for(int k = 0; k < 8; k++){
		if(arint[k] > max){
			max = arint[k];
			indmax = k;
		}
		
		if(arint[k] < min){
			min = arint[k];
			indmin = k;
		}
	}
	
	cout << "il numero massimo � " << max << " e il suo indice � " << indmax << endl;
	cout << "il numero minimo � " << min << " e il suo indice � " << indmin << endl; 
	
	return 0;
}

