//Dati in input il nome e il numero di gol relizzati dei primi 5 cannonieri della Serie A, calcolare il massimo dei gol realizzati e stampare il nome del calciatore
package javas.main.src;

import java.io.*;

public class Main27_10_3{
    public static void main(String[] args) {
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));
        int L = 5;
        int[] gol = new int[L];
        String[] nomi = new String[L];
        int max = 0, gioc = 0;

        for(int i = 0; i < L; i++){
            try {
                System.out.println("inserire nome giocatore");
                nomi[i] = tastiera.readLine();
            
                System.out.println("inserire gol totali");
                gol[i] = Integer.parseInt(tastiera.readLine());
            } catch (Exception e) {
                System.out.println(e);
            }
            if(gol[i] > max){
                max = gol[i];
                gioc = i;
            }
        }

        System.out.println("il capocannoniere è " + nomi[gioc] + " con " + max + " gol");

    }
}