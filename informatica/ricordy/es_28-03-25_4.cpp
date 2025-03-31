#include <iostream>
using namespace std;

int main(){
	int arint[10];
	
	for(int i = 0; i < 10; i++){
		arint[i] = 10*(i+1);
	}
	
	for(int k = 0; k < 10; k++){
		cout << arint[k] << endl;
	}
	
	return 0;
}
