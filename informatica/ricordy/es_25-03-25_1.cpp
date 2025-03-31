#include <iostream>
using namespace std;

int main(){
	int arint[10];
	bool tuttipari = true;
	
	for(int i = 0; i < 10; i++){
		int n;
		cout << "inserire numero " << i+1 << endl;
		cin >> n;
		n = arint[i];
	}
	
	for(int i = 0; i < 10; i++){
		if(arint[i] % 2 != 0){
			tuttipari = false;
			break;
		}
	}
	
	cout << "sono tutti pari? " << boolalpha << tuttipari << endl;
	
	
	return 0;
}

