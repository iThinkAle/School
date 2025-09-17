#include <iostream>
#include <string>
using namespace std;

int main(){
	string string1 = "salve";
	string string2 = "hello";
	
    string* pun1 = &string1;
    string* pun2 = &string2;
    
    for(int i = 0; i < 5; i++){
        (*pun2)[i] = (*pun1)[i];
    }
    
    cout << "la stringa copiata è " << string2 << endl;
    
    
    return 0;
}
