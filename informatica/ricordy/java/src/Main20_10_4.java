//Calcolare e stampare la classifica finale di una squadra dati in input 38 risultati (ciclo for)
package javas.main.src;

import java.io.*;

public class Main20_10_4{
    public static void main(String[] args) {
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));

        int som = 0;
        byte n = 34;
        int temp;

        for(int i = 0; i < n; i++){
            try{
                System.out.println("Inserisci punteggio per partita " + i+1);
                temp = Integer.parseInt(tastiera.readLine());
            }
            catch(Exception e){
                System.out.println("Inserisci numero valido");
                break;
            }
            
            som += temp;

        }

        System.out.println("Punti tot: " + som);

    }
}
