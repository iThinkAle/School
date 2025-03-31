#include <iostream>
using namespace std;

int main(){
	int arint[8];
	int minnov = 0;
	int magcent = 0;
	
	for(int i = 0; i < 8; i++){
		int n;
		cout << "inserire numero " << i+1 << endl;
		cin >> n;
		arint[i] = n; 
	}
	for(int i = 0; i < 8; i++){
		if(arint[i] < 9){
			minnov++;
		}
		else if(arint[i] > 100){
			magcent++;
		}
		else{
			continue;
		}
	}
	
	cout << "i numeri minori di nove sono " << minnov << ", mentre quelli maggiori di cento sono " << magcent << endl;
	
	return 0;
}
