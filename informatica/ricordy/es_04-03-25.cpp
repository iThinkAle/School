#include <iostream>
using namespace std;

bool numprimo(int a){
	if(a <= 1){
		return false;
	}
	else{
		for(int i = 2; i <= a / 2; i++){
			if(a % i == 0){
				return false;
				break;
			}
		}
	}
	return true;
}


int main(){
	int num;
	
	cout << "inserisci numero" << endl;
	cin >> num;
	cout << "il numero � primo? " << boolalpha << numprimo(num) << endl;
	
	return 0;
}
