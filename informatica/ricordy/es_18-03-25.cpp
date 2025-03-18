#include <iostream>
using namespace std;

float calcarea(float r){
	float pi = 3.14;
	
	float area = r*r*pi;
	
	return area;
}


int main(){
	float ris, raggio;
	
	cout << "inserisci il raggio" << endl;
	cin >> raggio;
	
	ris = calcarea(raggio);
	
	cout << "area = " << ris << endl;
	
	return 0;
}	
