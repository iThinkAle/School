#include <iostream>
using namespace std;

int main(){
	int arint[18];
	int minnov = 0;
	
	for(int i = 0; i < 18; i++){
		int n;
		cout << "inserire numero " << i+1 << endl;
		cin >> n;
		arint[i] = n;
	}
	
	for(int k = 0; k < 18; k++){
		if(arint[k] < 9){
			minnov++;
		}
	}
	
	cout << "i numeri minore di nove sono " << minnov << endl;
	
	return 0;
}

