//Data la base e l’altezza di un triangolo, calcolare l’area con la formula A = b * h / 2
package javas.main.src;

import java.io.*;

public class Main20_10_3{
    public static void main(String[] args) {
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));
        
        float b = 0, h = 0, a;
        
        System.out.println("Inserire base");
        try {
            b = Float.parseFloat(tastiera.readLine());

        } 
        catch (Exception e) {
            System.out.println("Inserisci numero valido");
        }

        System.out.println("Inserire altezza");
        try {
            h = Float.parseFloat(tastiera.readLine());

        } 
        catch (Exception e) {
            System.out.println("Inserisci numero valido");
        }

        a = b*h/2;

        System.out.println("l'area è " + a);

    }
    
}
