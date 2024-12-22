#include <iostream>
#include <string>
using namespace std;

// Es 4
namespace frutta{
    int var1 = 14;
}

// Es 5
namespace baule{
    int var2 = 5;
    int var3 = 10;
    double var4 = 2.25124321553426;
    const float golden = 0.61803398875;
}


int main(){
    // Es 1
    int numero = 10;

    // Es 2
    int prova = 5260;
    cout << prova << endl;

    // Es 3
    const float pi = 3.14;
    cout << pi << endl;

    // Es 4
    //inizio file

    // Es 5
    using namespace baule;
    cout << var2 << " " << var3 << " " << var4 << " " << golden << endl;

    /* Es 6
    int input1;
    cin >> input1;
    cout << input1 << endl;

    // Es 7
    string input2, input3, input4, input5;
    cin >> input2 >> input3 >> input4 >> input5;
    cout << input2 << " " << input3 << " " << input4 << " " << input5 << endl;*/

    // Es 8
    double numero1_8 = 3.14;
    int numero2_8 = numero1_8;


    return 0;
}

