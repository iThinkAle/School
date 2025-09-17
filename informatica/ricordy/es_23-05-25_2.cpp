#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

void maxmed(float array[16]){
	float max, som; 
	float med = 0;
	
	for(int i = 0; i < 16; i++){
		som += array[i];
		if(array[i] > max){
			max = array[i];
		}
	}
	
	med = som / 16;
	
	cout << "massimo: " << max << endl << "media: " << med << endl;
}

int main(){
	float decimali[16];
	int a = 5;
	
	srand(time(0));
	
	for(int i = 0; i < 16; i++){
		float n;
		n = ((float)(rand()) / (float)(RAND_MAX) * a);
		decimali[i] = n;
	}
	for(int i = 0; i < 16; i++){
		cout << decimali[i] << endl;
	}
	
	maxmed(decimali);
	
	return 0;
}
