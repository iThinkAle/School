#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
	float som, med;
	float min = 100000.0;
	float decimali[12];
	int a = 5;
	
	srand(time(0));
	
	for(int i = 0; i < 12; i++){
		float n;
		n = ((float)(rand()) / (float)(RAND_MAX) * a);
		decimali[i] = n;
		som += n;
		if(n < min){
			min = n;
		}
	}
	med = som / 12;
	
	cout << "media: " << med << ", min: " << min << endl;
	
	return 0;
}
