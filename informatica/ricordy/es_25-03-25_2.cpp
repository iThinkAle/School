#include <iostream>
using namespace std;

bool primo(int x){
	if(x <= 1){
		return false;
	}
	else{
		for(int i = 2; i*i <= x; i++){
			if(x % i == 0){
				return false;
			}
		}
	}
	
	return true;
}

int main(){
	int arint[12];
	int primi = 0;
	
	for(int i = 0; i < 12; i++){
		int n;
		cout << "inserire numero " << i+1 << endl;
		cin >> n;
		arint[i] = n; 
	}
	
	for(int i = 0; i < 12; i++){
		if(primo(arint[i])){
			primi++;
		}
	}
	
	cout << "i primi sono " << primi << endl;
	
	
	return 0;
}
