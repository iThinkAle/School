#include <iostream>
using namespace std;

int main(){
	int interi[19];
	int som;
	int min = 10000000;
	int max = 0;
	float med;
	
	for(int i = 0; i < 19; i++){
		int n;
		cout << "inserire intero " << i+1 << endl;
		cin >> n;
		
		som += n;
		if(n > max){
			max = n;
		}
		if(n < min){
			min = n;
		}
	}
	
	med = som / 19;
	
	cout << "massimo: " << max << ", minimo: " << min << ", somma: " << som << ", media: " << med << endl;
	
	return 0;
}
