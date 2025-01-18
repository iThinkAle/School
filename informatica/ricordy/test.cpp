#include <iostream>
using namespace std;


int main()
{
    int prezzogiornaliero = 30;
    int giorninoleggio;

    cout << "inserisci i giorni totali del noleggio" << endl;
    cin >> giorninoleggio;
    if(giorninoleggio > 6) {
        int totale = giorninoleggio*prezzogiornaliero;
        int sconto = totale/100*10;
        int totscontato = totale - sconto;
        cout << "totale da pagare: " << totscontato << " euro" << endl;
    }
    else {
        int totale = giorninoleggio*prezzogiornaliero;
        cout << "totale da pagare: " << totale << " euro" << endl;
    }

    return 0;
}

