//Dati i 10 voti di fine quadrimestre (prenderli in input), calcolare la media e stampare il messaggio "Sono salvo" se la media è >= 6, altrimenti stampare "Sono cavoli amari"
package javas.main.src;

import java.io.*;

public class Main27_10_2{
    public static void main(String[] args) {
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));
        float med = 0, som = 0;
        int L = 10;
        
        for(int i = 0; i < L; i++){
            float vot;
            System.out.println("inserire voto " + (i+1));

            try {
                vot = Float.parseFloat(tastiera.readLine());
                som += vot;
            } 
            catch (Exception e) {
                System.out.println(e);
            }
        }

        med = som / L;

        if(med >= 6){
            System.out.println("Sono salvo");
        }
        else{
            System.out.println("Sono cavoli amari");
        }
    
    }
}