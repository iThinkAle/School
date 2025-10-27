//Dati 8 numeri interi, calcolare e stampare il massimo (ciclo for)
package javas.main.src;

import java.io.*;

public class Main20_10_1{
    public static void main(String[] args) {
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));

        int max = 0;
        byte n = 8;
        int temp;

        for(int i = 0; i < n; i++){
            try{
                temp = Integer.parseInt(tastiera.readLine());
            }
            catch(Exception e){
                System.out.println("Inserisci numero valido");
                break;
            }
            if(temp > max){
                max = temp;
            }
        }

        System.out.println("Massimo: " + max);

    }
}
