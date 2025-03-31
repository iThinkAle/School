#include <iostream>
using namespace std;

int main(){
	int arint[12];
	
	
	for(int i = 0; i < 12; i++){
		int n;
		cout << "inserire numero " << i+1 << endl;
		cin >> n;
		arint[i] = n; 
	}
	
	bool uguali = false;
	for(int i = 0; i < 12 - 1; i++){
		for(int j = i + 1; j < 12; j++){
			if(arint[i] == arint[j]){
				uguali = true;
				break;
			}
		}
		if(uguali = true){
			break;
		}
	}
	
	cout << "ci sono almeno due coppie uguali?" << boolalpha << uguali << endl;
	
	
	return 0;
}
