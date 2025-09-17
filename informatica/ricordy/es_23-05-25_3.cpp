#include <iostream>
using namespace std;

float sconto(int numart, float totspesa){
	float tot_scontato;
	
	if(numart == 5){
		tot_scontato = totspesa * 0.95;
	}
	else if(numart == 6){
		tot_scontato = totspesa * 0.935;
	}
	else if(numart == 7){
		tot_scontato = totspesa * 0.93;
	}
	else if(numart == 8){
		tot_scontato = totspesa * 0.925;
	}
	else if(numart > 8){
		tot_scontato = totspesa * 0.92;
	}
	else{
		tot_scontato = totspesa;
	}
	
	return tot_scontato;
}

int main(){
	int numart;
	float totspesa;
	
	cout << "inserire il numero degli articoli e il totale della spesa" << endl;
	cin >> numart;
	cin >> totspesa;
	
	cout << "il totale scontato è " << sconto(numart, totspesa) << endl;
	
	return 0;
}
