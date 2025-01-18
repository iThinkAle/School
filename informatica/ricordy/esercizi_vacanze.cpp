//onlinegdb: https://onlinegdb.com/aKX6y0c42
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

    // Es 6
    int input1;
    cin >> input1;
    cout << input1 << endl;

    // Es 7
    string input2, input3, input4, input5;
    cin >> input2 >> input3 >> input4 >> input5;
    cout << input2 << " " << input3 << " " << input4 << " " << input5 << endl;

    // Es 8
    double numero1_8 = 3.14;
    int numero2_8 = static_cast <int> (numero1_8);
    cout << numero2_8 << endl;

    // Es 9
    string numero1_9 = "15";
    int numero2_9 = stoi(numero1_9);
    cout << numero2_9 << endl;
    
    // Es 10
    int numero1_10 = 6; 
    int numero2_10 = 8;
    cout << numero1_10 + numero2_10 << endl;
    
    // Es 11
    int base = 10;
    int altezza = 7;
    int area = base*altezza;
    cout << area << endl;
    
    // Es 12
    int numero1_12 = 32;
    int numero2_12 = 84;
    int numero3_12 = 49;
    int media = (numero1_12 + numero2_12 + numero3_12) / 3;
    cout << media << endl;
    
    // Es 13
    bool bool1_13 = true;
    bool bool2_13 = true;
    bool cond13 = bool1_13 && bool2_13;
    cout << boolalpha << cond13 << endl;
    
    // Es 14
    bool bool1_14 = false;
    bool bool2_14 = false;
    if(bool2_14 == false && bool1_14 == false){
        cout << true << endl;
    }
    else{
        cout << false << endl;
    }
    
    // Es 15
    int numero1_15 = 90;
    int numero2_15 = 103;
    bool cond1_15 = numero1_15 < 100 && numero1_15 % 2 == 0;
    bool cond2_15 = numero2_15 % 2 != 0 && 100 <= numero2_15 <= 200;
    cout << boolalpha << cond1_15 << " " << cond2_15 << endl;
    
    // Es 16
    int numero1_16 = 64;
    int numero2_16 = 32;
    bool cond16 = numero1_16 == numero2_16;
    cout << boolalpha << cond16 << endl;
    
    // Es 17
    int numero1_17 = 56;
    double numero2_17 = 5.3421312;
    bool cond17 = typeid(numero1_17).name() == typeid(numero2_17).name();
    cout << boolalpha << cond17 << endl;
    
    // Es 18
    string stringa18 = "mondo";
    cout << stringa18.find("n") << endl;
    
    // Es 19
    string stringa19;
    cout << "inserisci una parola" << endl;
    cin >> stringa19;
    cout << stringa19.length() << endl;
    
    // Es 20
    string stringa1_20 = "hello";
    string stringa2_20 = "world";
    string stringaRis_20 = stringa1_20 + stringa2_20;
    cout << stringaRis_20 << endl;
    
    return 0;
}
