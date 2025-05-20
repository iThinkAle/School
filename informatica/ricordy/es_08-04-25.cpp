#include <iostream>
using namespace std;

void foo(int var1, float var2, bool var3){
	cout << "var1 " << var1 << ", var2 " << var2 << ", var3 " << boolalpha << var3 << endl;
}

int main(){
	int var1 = 20;
	float var2 = 3.561;
	bool var3 = true;
	
	cout << "var1 " << var1 << ", var2 " << var2 << ", var3 " << boolalpha << var3 << endl;
		
	foo(var1, var2, var3);
	return 0;
}

