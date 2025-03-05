#include <iostream>
#include <string>
using namespace std;

int lungh(string str){
	return str.length();
}

int main(){
	string stringa;
	int length;
	
	cin >> stringa;
	length = lungh(stringa);
	cout << length;
	
	return 0;
}

