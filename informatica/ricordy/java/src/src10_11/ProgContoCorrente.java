package src10_11;

import javax.naming.ldap.Control;
import java.io.*;

public class ProgContoCorrente {
    public static void main(String[] args) {
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));

        ContoCorrente conto = new ContoCorrente();

        String valore = "";
        double importo = 0;

        System.out.println("Importo da versare: ");
        try {
            valore = tastiera.readLine();
            importo = Double.parseDouble(valore);
        } catch (IOException e) {}

        conto.versa(importo);
        conto.stampaSaldo();

        System.out.println("Importo da prelevare: ");
        try {
            valore = tastiera.readLine();
            importo = Double.parseDouble(valore);
        } catch (IOException e) {}

        if(conto.getSaldo() >= importo) {
            conto.preleva(importo);
            conto.stampaSaldo();
        }
        else {
            System.out.println("Prelievo non disponibile");
        }
    }
}
