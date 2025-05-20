#include <iostream>
using namespace std;


//Crea un programma in C++ che utilizzi una funzione che riceva 4 variabili con numeri interi, qualora vi sia tra i numeri inseriti un numero pari, il programma dovrà moltiplicare tutti i numeri inseriti.
int funz_interi(int a, int b, int c, int d){                           //dichiarazione della funzione e delle variabili
	int prod = 0;
	
	if(a % 2 == 0 || b % 2 == 0 || c % 2 == 0 || d % 2 == 0){		   //controllo degli eventuali numeri pari
		prod = a*b*c*d;												   //se ci sono numeri pari, calcola il prodotto
	}
	else{
		prod = 0;													   //altrimenti metti prodotto = 0
	}
	
	return prod;
}


int main(){
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;													   //dichiarazioni delle variabili nella funzione principale
	int num4 = 0;
	int prodotto = 0;
	
	
	cout << "inserire numero a: ";
	cin >> num1;
	cout << "inserire numero b: ";
	cin >> num2;
	cout << "inserire numero c: ";									   //inserimento delle variabili da parte dell'utente
	cin >> num3;
	cout << "inserire numero d: ";
	cin >> num4;
	
	prodotto = funz_interi(num1, num2, num3, num4);					   //utilizzo della funzione mettendo il risultato su prodotto
	
	if(prodotto != 0){												   //controllo se è stato calcolato il prodotto (prodotto diverso da zero vuol dire che il prodotto è stato calcolato perché c'è almeno un numero paro
		cout << "tra i numeri inseriti ce n'è uno pari, di conseguenza il prodotto dei numeri è " << prodotto << endl;		
	}
	else{
		cout << "i numeri inseriti sono tutti dispari, di conseguenza il prodotto dei numeri non è stato calcolato" << endl;
	}
	
	
	return 0;
}
