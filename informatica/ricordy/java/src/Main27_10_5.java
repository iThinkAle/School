//Dati in input il prezzo di 6 articoli acquistati, calcolare il totale della spesa e, se supera i 100 euro, calcolare e stampare il prezzo con lo sconto del 5%
import java.io.*;

public class Main27_10_5{
    public static void main(String[] args) {
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));
        int L = 6;
        float spesa = 0;

        for(int i = 0; i < L; i++){
            float temp = 0;
            try {
                System.out.println("inserire prezzo articolo " + (i+1));
                temp = Integer.parseInt(tastiera.readLine());
            } catch (Exception e) {
                System.out.println(e);
            }
            spesa += temp;
        }

        if(spesa >= 100){
            spesa = spesa / 100 * 95;
            System.out.println("Prezzo scontato: " + spesa);
        }
        else{
            System.out.println("Prezzo totale: " + spesa);
        }
    }
}