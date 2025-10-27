//Dati 10 voti, calcolare e stampare la media (ciclo for)
package javas.main.src;

import java.io.*;

public class Main20_10_2{
    public static void main(String[] args) {
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));

        int med = 0;
        int som = 0;
        byte n = 10;
        int vot;

        for(int i = 0; i < n; i++){
            try{
                System.out.println("Inserisci voto");
                vot = Integer.parseInt(tastiera.readLine());
            }
            catch(Exception e){
                System.out.println("Inserisci voto valido");
                break;
            }
            som += vot;
        }

        med = som / n;

        System.out.println("Media: " + med);
    }
}
