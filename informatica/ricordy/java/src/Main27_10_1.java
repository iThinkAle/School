//Scrivere il programma che stampa il testo "Prendo l'ombrello" se in input riceve P di pioggia, altrimenti stampa "Oggi niente ombrello"
package javas.main.src;

import java.io.*;

public class Main27_10_1{
    public static void main(String[] args){
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));
        String meteo = "s";

        System.out.println("inserire P se piove");
        try{
            meteo = tastiera.readLine();
        }
        catch(IOException e){
            System.out.println(e);
        }

        if(meteo.equals("P")){
            System.out.println("Prendo l'ombrello");
        }
        else{
            System.out.println("Oggi niente ombrello");
        }
    }
}
