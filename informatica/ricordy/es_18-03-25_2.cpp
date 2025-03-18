#include <iostream>
using namespace std;

int diff(int a, int b, int c){
	int max, min, diff;
	
	//minore
	if(a < b){
		if(a < c){
			min = a;
		}
		else{
			min = c;
		}
	}
	else{
		if(b < c){
			min = b
		}
		else{
			min = c
		}
	}
	
	//maggiore
	if(a > b){
		if(a > c){
			max = a;
		}
		else{
			max = c;
		}
	}
	else{
		if(b > c){
			max = b
		}
		else{
			max = c
		}
	}	
	
	diff = max - min;
	
	return diff;
}

int main(){
	int a, b, c, ris;
	
	cout << "inserisci a: " << endl;
	cin >> a;
	cout << "inserisci b: " << endl;
	cin >> b;
	cout << "inserisci c: " << endl;
	cin >> c;
	
	ris = diff(a, b, c);
	cout << "la differenza tra il minimo è il massimo è " << ris << endl;
	
	return 0;
}
