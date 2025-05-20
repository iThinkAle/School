#include <iostream>
using namespace std;

void cerchio(float r){
	float circ, area;
	const float pi = 3.14; 
	
	circ = 2*r*pi;
	area = r*r*pi;
	
	cout << "circonferenza: " << circ << endl;
	cout << "area: " << area << endl;
}


int main(){
	float raggio = 3;
	
	cout << "cerchio con raggio 3: " << endl;
	cerchio(raggio);
	
	raggio = 43;
	
	cout << "cerchio con raggio 43: " << endl;
	cerchio(raggio);
	
	
	return 0;
}
