#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 7;
    
    int* punA = &a;
    int* punB = &b;

    if(punA != punB){
        cout << "i puntatori sono differenti" << endl;
    }
    else{
        cout << "i puntatori sono identici" << endl;
    }
    
    cout << punA << endl;
    cout << punB << endl;
    
    return 0;
}
