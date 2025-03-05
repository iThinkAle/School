#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    float max = 0;
    
    for(int i=0; i<25; i++){
		float voto;
		cout << "voto" << i+1 << endl;
    	cin >> voto;
    	if(voto > max){
    		max = voto;
    		cout << "nome" << endl;
    		cin >> nome;
		}
	}
	
	cout << nome << endl;

    return 0;
}
