/*Dati 24 alunni, calcolare e stampare il numero di quelli di sesso maschile. Il sesso va gestito come una variabile intera dove maschio = 0 e donna = 1
Ho aggiunto la gestione degli errori e dei valori non utili*/

import java.io.*;

public class Main16_10 {
    public static void main(String[] args) {
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));

        int n = 24;
        int male = 0;
        int female = 0;
        int sex = 2;

        for(int i = 0; i < n; i++){
            System.out.println("alunno numero " + (i+1));

            System.out.println("Introduci sesso (0 per maschio, 1 per femmina)");
            try{
                sex = Integer.parseInt(tastiera.readLine());
            }
            catch (Exception e){
                System.out.println(e);
                if (i == 0) {
                    i = 0;
                }
                else if (i > 0){
                    i -= 1;
                }
                else{
                    continue;
                }
            }

            if(sex == 0){
                male++;
            }
            else if (sex == 1){
                female++;
            }
            else{
                i -= 1;
            }
        }

        System.out.println("i maschi sono: " + male);
        System.out.println("le femmine sono: " + female);

    }
}
